//1、推纯色相关代码
/*******************************************************************************
* Function Name  : lcd_initTab_config
* Description    : lcd inittab config
* Input          : None
* Output         : None
* Return         : none
*******************************************************************************/
void lcd_initTab_config(u32 *tab)
{
    if(tab == NULL)
        return;
    if(lcd_dev_api.dev_opt.lcd_bus_type == LCD_BUS_RGB)
    {
        hx330x_lcdSPIMode(lcd_dev_api.dev_opt.spi_cpol,lcd_dev_api.dev_opt.spi_cpha,lcd_dev_api.dev_opt.spi_order,lcd_dev_api.dev_opt.spi_bits);
        hx330x_lcdSPIInit();
    }
	#if LCD_RESET_IO_WAY
	hal_gpioWrite(LCD_RESET_CH, LCD_RESET_PIN,GPIO_HIGH); // 屏复位
	#endif
    while (1)
    {
        u32 tab_val = *tab++;
        if (tab_val == LCD_CMD_TAB_END)
            break;

        u32 type = tab_val & LCD_CMD_TYPE_MASK;
        u32 val = tab_val & LCD_CMD_VALUE_MASK;

        if (type == LCD_CMD_TYPE_RGB_DAT)
            hx330x_lcdSPISendData(val);
        else if (type == LCD_CMD_TYPE_DELAY_MS)
            hx330x_sysCpuMsDelay(val);
        else if (type == LCD_CMD_TYPE_MCU_CMD8)
            hx330x_lcdMcuSendCmd(val);
        else if (type == LCD_CMD_TYPE_MCU_DAT8)
            hx330x_lcdMcuSendData(val);
        else if (type == LCD_CMD_TYPE_MCU_CMD16)
            hx330x_lcdMcuSendCmd16(val);
        else if (type == LCD_CMD_TYPE_MCU_DAT16)
            hx330x_lcdMcuSendData16(val);
    }
    if(lcd_dev_api.dev_opt.lcd_bus_type == LCD_BUS_RGB)
    {
        hx330x_lcdSPIUninit();
    }
//chenjianshun---------------------------start
#if 0
    //LCD 背光IO口初始化
    hal_gpioInit(hardware_setup.lcd_backlight_ch, hardware_setup.lcd_backlight_pin ,GPIO_OUTPUT,GPIO_PULL_UP);
    hal_gpioEPullSet(hardware_setup.lcd_backlight_ch, hardware_setup.lcd_backlight_pin,GPIO_PULLE_DOWN);
    hal_gpioWrite(hardware_setup.lcd_backlight_ch, hardware_setup.lcd_backlight_pin,GPIO_LOW);

    //拉高背光IO口
    hal_gpioEPullSet(hardware_setup.lcd_backlight_ch, hardware_setup.lcd_backlight_pin, GPIO_PULLE_UP);
    hal_gpioWrite(hardware_setup.lcd_backlight_ch, hardware_setup.lcd_backlight_pin, GPIO_HIGH);

    //推纯色相关代码
    deg_Printf("lcd init ok.\r\n");
    //分辨率240x240
    //设施屏窗口区域
    hx330x_lcdMcuSendCmd(0x2a);     //设置列
    hx330x_lcdMcuSendData(0x00);    //起始行
    hx330x_lcdMcuSendData(0x00);
    hx330x_lcdMcuSendData(0x00);    //终止列
    hx330x_lcdMcuSendData(0xef);
    hx330x_lcdMcuSendCmd(0x2b);     //设置行
    hx330x_lcdMcuSendData(0x00);    //起始行
    hx330x_lcdMcuSendData(0x28);    
    hx330x_lcdMcuSendData(0x28);//40 //终止行
    hx330x_lcdMcuSendData(0x01);
    hx330x_lcdMcuSendData(0x17);

    hx330x_lcdMcuSendCmd(0x2c);     //命令开始读数据
    #if 1
    u32 i,j;
    for(i = 0;i < 240;i++)
    {
        for(j = 0;j < 240;j++)
        {
            hx330x_lcdMcuSendData(0xF8);//红色：0xF800，绿色：0x07E0，蓝色：0x001F，白色：0xFFFF，黄色：0xFFE0，紫色：0xF81F
            hx330x_lcdMcuSendData(0x00);
        }
    } 
    hx330x_sysCpuMsDelay(50);
    hx330x_lcdMcuSendCmd(0x2a);     //设置列
    hx330x_lcdMcuSendData(0x00);    //起始行
    hx330x_lcdMcuSendData(0x00);
    hx330x_lcdMcuSendData(0x00);    //终止列
    hx330x_lcdMcuSendData(0xef);
    hx330x_lcdMcuSendCmd(0x2b);     //设置行
    hx330x_lcdMcuSendData(0x00);    //起始行
    hx330x_lcdMcuSendData(0x28);    
    hx330x_lcdMcuSendData(0x28);//40 //终止行
    hx330x_lcdMcuSendData(0x01);
    hx330x_lcdMcuSendData(0x17);

    hx330x_lcdMcuSendCmd(0x2c);     //命令开始读数据
    for(i = 0;i < 240;i++)
    {
        for(j = 0;j < 240;j++)
        {
            hx330x_lcdMcuSendData(0x00);//红色：0xF800，绿色：0x07E0，蓝色：0x001F，白色：0xFFFF，黄色：0xFFE0，紫色：0xF81F
            hx330x_lcdMcuSendData(0x1F);
        }
    }
    hx330x_sysCpuMsDelay(50);
    #endif
#endif
//chenjianshun--------------------------end
}

