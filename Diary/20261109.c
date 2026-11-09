JSON{
	ctrl + E:打开/关闭远控；
	git rm -r --cached//删除已commit的文件；
	git reset --hard commited  //commited 是版本序号
	
//JSON---------------------start:
//JSON---------------------end:

.id               =	0x
	
printf("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
deg_Printf("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
uart_Printf("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
}

待做{
	
}

独白{
	一直运动，能加速血液流通，清醒大脑；
	休息一小时；
}

sdk备注{
	1、usensor需要25帧以下；
}
	
提测流程{
	1、修改需求；
	2、关闭串口打印；
	3、发送SDK压缩包，拿到svn编号；
	4、命名固件，发送邮件给测试；
}

周报流程{
	1、填写周报；
	2、发邮件给庞建文，抄送给蒋勇和李满华（project），注意，需要抄送给project账号；
}

发邮件流程{
	1、确认修改点是否添加；
	2、确认压缩包大小是否正常；
}

项目整理{
	待处理：
	SD-PK01J。
	
	等待中：
	等待硬件：
	
	
	已完成：
	MKL-ES09C-LT，测试问题，客户问题；
	Y200-DV04-LT, 摄像头不亮；
	JDK-SD3166，删除界面时 语言。英文，显示不全（详情查看附件视频）；
	SD-PK01J，后续客户可能提需求；
	ZRD-Z007J；
}




项目注意事项{
	固件、SDK命名：主控型号+项目名+版本号+SVN号+日期；
	测试通过，才算结束；
	改动需要发邮件回复；
}

需要添加的东西{
	1、垃圾桶；
	2、扩展坞；
	3、type C充电口；
}

生成字符串的步骤{
	1、修改font.lsx;
	2、使用excel_to_txt.exe将exel分解成多个txt文件；
	3、如果有新增行，对比修改font.tab，这是excel的第一列；
	4、如果有新增列，对比修改font.ini，这是excel的第一行；
	5、运行resource/font/fontSrc.bat，生成fontSrc.txt；
	6、运行resource/font/font_build.exe,选择字符文件fontSrc.txt ,生成resource/font/font.bin；
	7、运行resource/font/maxRes.bat，生成\resTable\resfont.bin, \resTable\resfontidx.bin, user_str.c, user_str.h；
	8、运行resource/GenRes.bat，生成RES.bin ,RES.h；
}

生成图标的步骤{
	1、修改icon的图标；
	2、运行resource/icon/OSDEdit.exe，生成OSD_source.tmp；
	3、运行resource/icon/maxRes.bat，生成\resTable\OSD_source.bin，\restable\palette.bin，user_icon.c，user_icon.h，r_palette.h；
	4、运行resource/GenRes.bat，生成RES.bin ,RES.h；
}

temp{
	taskRegister(TASK_VIDEO_RECORD, &taskVideoRecorde);
	taskRegister(TASK_PHOTO_ENCODE, &taskPhotoEncode);
	
	R_ID_ICON
}



pos12{
	//D[7:0]={PD[12:5]},CLK/WR=PF1,HS/RS=PF2,DE/CS=PF4,VS/TE=PF3
				[12:5]
}

SD-PK01J项目问题{
	1、录音杂音大，声音小几乎听不到，电脑听也是杂音大，声音小； ----硬件确认是麦克风问题
	2、拍照录像保存实际成像大小；			-					---跟客户沟通，暂不修改；
	3、成像底噪大电脑端看模糊；									----ISP确认是焦距问题；
	
	综上，固件不需要修改；
}

内存问题{
	480 272
	2M326KB,634KB,
	2374 - 634 = 1740(1M716KB)
	
	854 480
	
	834kb 一帧
}

后视镜内存问题{
	关掉串口；
	AVI.a,
	
	13kb,
}

后视镜问题{
	1、帧率不够；
	2、顶部线花；
	3、枚举时间过长；
}

20261103项目进度{
	31，陈建舜        XKC-DDC		----硬件同事处理中
	32，陈建舜        SD-PK01J		----ISP同事处理中
}

项目猜测{
	1、旋转成0的话，显示不明显；
	2、改buf不影响功能；
}

后视镜项目{
	后视镜项目仍有3个问题未处理：
	1、摄像头帧率只有14-15帧；
	2、摄像头出图，顶部花屏；
	3、枚举时间过长，出图前出现colorbar；
}

后视镜问题{
	1、枚举确实足够快；
	2、顶部花屏问题需要换芯片后确认；
}

20261104项目进度{
	今日进度：
	使用AX329x 新sdk点亮JT5295主控屏幕（854x480）和720 USB摄像头；
	
	AX329x 新sdk问题：
	1、有明显的切线；
	2、无法满屏显示（usb 1280x720被裁剪成了640x480），右侧异常；
}

20261106中午项目进度{
17，陈建舜        XKC-DDC	对接客户 ----已给客户演示完成；
18，陈建舜        XKC-DDC	点屏     ----硬件处理中；
}

SD-PK01J提测{
	SD-PK01J提测：
	改大增益，优化声音小的问题；
}

申请内存{
	hal_sysMemMalloc
}

20261105项目进度{
	17，陈建舜        XKC-DDC      在旧屏问题已全部处理，新屏暂时没有点亮；
}

{
	1、去回放界面查看视频经常没几秒就中断播放了；
	2、去回放界面查看视频没有声音；
	3、菜单设置左键向上，右键向下；
	4、时间水印太小；
	5、电脑连USB查看视频同意断开；
	6、录音声音继续加大；
}


setyuv{
/*******************************************************************************
* Function Name  : hal_lcdSetBufYUV
* Description    : fill a video frame with a solid YUV420 color
* Input          : buffer: lcd buffer pointer
                   y, u, v: color components
* Output         : None
* Return         : None
*******************************************************************************/
void hal_lcdSetBufYUV(disp_frame_t * buffer,u8 y,u8 u,u8 v)
{
    if(buffer && buffer->y_addr && buffer->uv_addr)
    {
        u32 y_size  = buffer->h * buffer->stride;
        u32 uv_size = y_size / 2;
        u32 i;

        memset(buffer->y_addr,y,y_size);

        for(i = 0; i + 1 < uv_size; i += 2)
        {
            buffer->uv_addr[i]     = u;
            buffer->uv_addr[i + 1] = v;
        }

        if(i < uv_size)
            buffer->uv_addr[i] = u;

        ax32xx_sysDcacheWback((u32)buffer->y_addr,y_size);
        ax32xx_sysDcacheWback((u32)buffer->uv_addr,uv_size);
    }
}

static u8 hal_lcdClampColor(s32 value)
{
    if(value < 0)
        return 0;
    if(value > 255)
        return 255;
    return (u8)value;
}

/*******************************************************************************
* Function Name  : hal_lcdSetBufRGB
* Description    : convert an RGB color to BT.601 limited-range YUV and fill frame
* Input          : buffer: lcd buffer pointer
                   r, g, b: RGB color components
* Output         : None
* Return         : None
*******************************************************************************/
void hal_lcdSetBufRGB(disp_frame_t * buffer,u8 r,u8 g,u8 b)
{
    u8 y, u, v;

    y = hal_lcdClampColor(((66 * (s32)r + 129 * (s32)g + 25 * (s32)b + 128) >> 8) + 16);
    u = hal_lcdClampColor(((-38 * (s32)r - 74 * (s32)g + 112 * (s32)b + 128) >> 8) + 128);
    v = hal_lcdClampColor(((112 * (s32)r - 94 * (s32)g - 18 * (s32)b + 128) >> 8) + 128);

    hal_lcdSetBufYUV(buffer,y,u,v);
}
}

Y200-DV04-LT{
1。开机，关机音乐不对，目前声音是 小马宝莉的
2。游戏 主界面 背景不对，是小马宝利的，要修改为 白色背景
3。游戏不对，少 贪吃蛇，少 俄罗斯方块
4。光线正常环境拍照界面噪点多  很明显
5。无卡拍照数量 修改  （朱迪30张       米奇、米妮、草莓熊36张）

//等待处理：
//等待ISP处理：4，

已处理：1，2，3，
未处理：4，5，
}

Y200-DV04-LT提测{
	Y200-DV04-LT 草莓熊 主题提测：
	1。开机，关机音乐不对，目前声音是 小马宝莉的----已处理；
	2。游戏 主界面 背景不对，是小马宝利的，要修改为 白色背景----已处理；
	3。游戏不对，少 贪吃蛇，少 俄罗斯方块----已处理；
	4。光线正常环境拍照界面噪点多  很明显----ISP已处理；
	5。无卡拍照数量 修改  （朱迪30张       米奇、米妮、草莓熊36张）----已处理；
}









