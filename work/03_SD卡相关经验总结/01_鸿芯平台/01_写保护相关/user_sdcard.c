#include "user.h"
#include "mmc/sd.h"
#define LOG_TAG "SD"

#define FORMATTED_FLAG_FILENAME ".format"

extern void user_sdcard_upgrade(struct udevice *sdcard);

static int SRAM_BSS2(sg_sd_det_en);
static int SRAM_BSS2(sg_sd_det_cnt);
static StaticSemaphore_t sd_semphr[2];
static struct sdcard_plat sd_palt = {
    .sdio_freq = CONFIG_SDCARD_SDIO_FREQ,
    .lock_semphr = &sd_semphr[0],
    .trans_semphr = &sd_semphr[1],
    .timeout = 3000,
};
static DM_DEVICE_INST(sdcard) = {
    .name = DEV_SDCARD,
    .driver = DM_DRIVER_REF(sd),
    .plat_ = &sd_palt,
    .parent = DM_DEVICE_REF(sdc0),
};

struct udevice *dm_get_sdcard(void)
{
    return DM_DEVICE_REF(sdcard);
}

void user_sdcard_init(void)
{
    // 初步初始化sdcard
    struct udevice *dev = dm_get_sdcard();
    dm_device_probe(dev);
    sg_sd_det_en = 1;
}

void user_sdcard_detect_enable(int enable)
{
    sg_sd_det_en = enable;
}

void user_sdcard_after_formatted(int is_ok)
{
    if (is_ok)
    {
        // 创建一个文件，作为该tf卡已经被本机格式化过的标记
        void *fp = fat_open(FORMATTED_FLAG_FILENAME, FA_CREATE_ALWAYS);
        fat_close(fp);
        f_chmod(FORMATTED_FLAG_FILENAME, AM_HID|AM_SYS, AM_HID|AM_SYS);
    }
}

/* ----------------------------- test csd parse ----------------------------- */
#include "sdc.h"
struct rt_mmcsd_csd {
    uint8_t      csd_structure;  /* CSD register version */
    uint8_t      taac;
    uint8_t      nsac;
    uint8_t      tran_speed;    /* max data transfer rate */
    uint16_t     card_cmd_class; /* card command classes */
    uint8_t      rd_blk_len;    /* max read data block length */
    uint8_t      rd_blk_part;
    uint8_t      wr_blk_misalign;
    uint8_t      rd_blk_misalign;
    uint8_t      dsr_imp;       /* DSR implemented */
    uint8_t      c_size_mult;   /* CSD 1.0 , device size multiplier */
    uint32_t     c_size;        /* device size */
    uint8_t      r2w_factor;
    uint8_t      wr_blk_len;    /* max wtire data block length */
    uint8_t      wr_blk_partial;
    uint8_t      csd_crc;

    uint8_t     PermWrProtect;  /* Permanent write protection */
    uint8_t     TempWrProtect;  /* Temporary write protection */

};

static inline uint32_t GET_BITS(uint32_t *resp,
                               uint32_t  start,
                               uint32_t  size)
{
        const int32_t __size = size;
        const uint32_t __mask = (__size < 32 ? 1 << __size : 0) - 1;
        const int32_t __off = 3 - ((start) / 32);
        const int32_t __shft = (start) & 31;
        uint32_t __res;

        __res = resp[__off] >> __shft;
        if (__size + __shft > 32)
            __res |= resp[__off-1] << ((32 - __shft) % 32);

        return __res & __mask;
}

static uint32_t mmcsd_parse_csd(struct rt_mmcsd_csd *csd, uint32_t *resp_csd)
{
    // struct rt_mmcsd_csd *csd = csd;
    uint32_t *resp = resp_csd;

    csd->csd_structure = GET_BITS(resp, 126, 2);

    switch (csd->csd_structure)
    {
    case 0:
        csd->taac = GET_BITS(resp, 112, 8);
        csd->nsac = GET_BITS(resp, 104, 8);
        csd->tran_speed = GET_BITS(resp, 96, 8);
        csd->card_cmd_class = GET_BITS(resp, 84, 12);
        csd->rd_blk_len = GET_BITS(resp, 80, 4);
        csd->rd_blk_part = GET_BITS(resp, 79, 1);
        csd->wr_blk_misalign = GET_BITS(resp, 78, 1);
        csd->rd_blk_misalign = GET_BITS(resp, 77, 1);
        csd->dsr_imp = GET_BITS(resp, 76, 1);
        csd->c_size = GET_BITS(resp, 62, 12);
        csd->c_size_mult = GET_BITS(resp, 47, 3);
        csd->r2w_factor = GET_BITS(resp, 26, 3);
        csd->wr_blk_len = GET_BITS(resp, 22, 4);
        csd->wr_blk_partial = GET_BITS(resp, 21, 1);
        csd->csd_crc = GET_BITS(resp, 1, 7);

        csd->PermWrProtect = GET_BITS(resp, 13, 1);
        csd->TempWrProtect = GET_BITS(resp, 12, 1);

        // card->card_blksize = 1 << csd->rd_blk_len;
        // card->card_capacity = (csd->c_size + 1) << (csd->c_size_mult + 2);
        // card->card_capacity *= card->card_blksize;
        // card->card_capacity >>= 10; /* unit:KB */
        // card->tacc_clks = csd->nsac * 100;
        // card->tacc_ns = (tacc_uint[csd->taac&0x07] * tacc_value[(csd->taac&0x78)>>3] + 9) / 10;
        // card->max_data_rate = tran_unit[csd->tran_speed&0x07] * tran_value[(csd->tran_speed&0x78)>>3];

        break;
    case 1:
        // card->flags |= CARD_FLAG_SDHC;

        /*This field is fixed to 0Eh, which indicates 1 ms.
          The host should not use TAAC, NSAC, and R2W_FACTOR
          to calculate timeout and should uses fixed timeout
          values for read and write operations*/
        csd->taac = GET_BITS(resp, 112, 8);
        csd->nsac = GET_BITS(resp, 104, 8);
        csd->tran_speed = GET_BITS(resp, 96, 8);
        csd->card_cmd_class = GET_BITS(resp, 84, 12);
        csd->rd_blk_len = GET_BITS(resp, 80, 4);
        csd->rd_blk_part = GET_BITS(resp, 79, 1);
        csd->wr_blk_misalign = GET_BITS(resp, 78, 1);
        csd->rd_blk_misalign = GET_BITS(resp, 77, 1);
        csd->dsr_imp = GET_BITS(resp, 76, 1);
        csd->c_size = GET_BITS(resp, 48, 22);

        csd->r2w_factor = GET_BITS(resp, 26, 3);
        csd->wr_blk_len = GET_BITS(resp, 22, 4);
        csd->wr_blk_partial = GET_BITS(resp, 21, 1);
        csd->csd_crc = GET_BITS(resp, 1, 7);

        csd->PermWrProtect = GET_BITS(resp, 13, 1);
        csd->TempWrProtect = GET_BITS(resp, 12, 1);
        // card->card_blksize = 512;
        // card->card_capacity = (csd->c_size + 1) * 512;  /* unit:KB */
        // card->tacc_clks = 0;
        // card->tacc_ns = 0;
        // card->max_data_rate = tran_unit[csd->tran_speed&0x07] * tran_value[(csd->tran_speed&0x78)>>3];

        break;
    default:
        hx_printk("unrecognised CSD structure version %d!\n", csd->csd_structure);

        return -1;
    }

    hx_printk("SD csd_structure: 0x%x\n", csd->csd_structure);
    hx_printk("SD card_capacity: %dKB\n", (csd->c_size + 1) * 512);
    hx_printk("SD PermWrProtect: 0x%x\n", csd->PermWrProtect);
    hx_printk("SD TempWrProtect: 0x%x\n", csd->TempWrProtect);

    return 0;
}

static int test_sd_get_csd(void)
{
    struct udevice *sdcard = dm_get_sdcard();
    struct sdcard_plat *plat = dev_get_plat(sdcard);
    struct hx330x_sdc_plat *sdc_plat = dev_get_plat(sdcard->parent);

    int res;
    uint32_t resp[4];
    struct rt_mmcsd_csd csd;

    memset(&csd, 0, sizeof(struct rt_mmcsd_csd));
    memset(resp, 0, sizeof(resp));

    res = sdc_send_cmd(sdcard->parent, 9, plat->sdinfo.dwRCA, MMC_RSP_R2, NULL);
    uint32_t *p = sdc_plat->r2_buff_;
    resp[0] = p[0];
    resp[1] = p[1];
    resp[2] = p[2];
    resp[3] = p[3];

    hx_printk("========= Get CSD =========\n");
    hx_printk("-- resp[0]:%x\n", resp[0]);
    hx_printk("-- resp[1]:%x\n", resp[1]);
    hx_printk("-- resp[2]:%x\n", resp[2]);
    hx_printk("-- resp[3]:%x\n", resp[3]);
    hx_printk("-------- CSD Parse --------\n");
    mmcsd_parse_csd(&csd, resp);
    hx_printk("===========================\n");
    return res;
}

static void on_sdcard_change(void *dev, u32 sta)
{
    void *fp = NULL;

	if (sta == SDC_STAT_IN)
	{
		task_com_sdc_stat_set(SDC_STAT_IN);

        /* Running test here... */
        test_sd_get_csd();

		// 挂载文件系统
		if (!fat_mount_sdcard(dev))
		{
			user_sdcard_upgrade(dev);
#ifndef CONFIG_SDCARD_NOT_CHECK_LOCAL_FORMATTED
            // 检查是否被本机格式化过
            fp = fat_open(FORMATTED_FLAG_FILENAME, FA_READ);
            if (!fp)
            {
				HX_LOGE(LOG_TAG, "not formatted by machine");
				task_com_sdc_stat_set(SDC_STAT_ERROR);
            }
            else
#endif
            {
                fat_close(fp);

                // 文件扫描
                if (user_fl_scan())
                {
                    HX_LOGE(LOG_TAG, "file list scan error, need format\n");
                    task_com_sdc_stat_set(SDC_STAT_ERROR);
                }
                else
                {
                    task_com_sdc_stat_set(SDC_STAT_NORMAL);
                }
            }

            task_com_sdc_freesize_check();
		}
		else
		{
			task_com_sdc_stat_set(SDC_STAT_ERROR);
			HX_LOGE(LOG_TAG, "sdcard mount err\n");
		}
	}

	if (sta == SDC_STAT_REMOVE)
	{
		hx_printk("[COM] : sd remove\n");
		user_fl_clear();
		task_com_sdc_stat_set(SDC_STAT_NULL);
		task_com_sdc_freesize_check();
	}
}

void user_sdcard_detect(void)
{
    struct udevice *dev = dm_get_sdcard();

    if (!sg_sd_det_en)
        return;

    if (device_active(dev))
    {
        // SD card ACTIVED, send CMD13 to check whether the SD card is alive
        if (mmc_sd_alive(dev))
        {
            // online
            sg_sd_det_cnt = 0;
        }
        else
        {
            // off-line
            sg_sd_det_cnt++;
            if (sg_sd_det_cnt > 20)
            {
                dm_device_remove(dev, 0);
                on_sdcard_change(dev, SDC_STAT_REMOVE);
            }
        }
    }
    else
    {
        // SD card off-line, try probe
        sg_sd_det_cnt++;
        if (sg_sd_det_cnt & (1 << 6))
        {
            sg_sd_det_cnt = 0;
            if (!dm_device_probe(dev))
            {
                on_sdcard_change(dev, SDC_STAT_IN);
            }
        }
    }
}

void user_sdcard_get_info(struct sdcard_info *info)
{
    if (!info)
        return;

    info->status = SysCtrl.dev_stat_sdc;
    info->total_size_KB = SysCtrl.sdc_totalsize;
    info->free_size_KB = SysCtrl.sdc_freesize;
}
