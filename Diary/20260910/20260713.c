print{
    deg_Printf("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
    hx_printk("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
        
   //JSON-----------------------START:
   
   //JSON-------------------------END
   
    //JSON-TIPS：某些客户不需要升级后自动格式化功能
   }
   
   Avora{ 
   OR1K_GCC_PATH = r'D:\ChenJianShun\02_software\24_toolchain\hx330x-gcc-elf-newlib-sf-mingw-V4.9.1\bin'
   XUANTIE_900_GCC_PATH = r'D:\ChenJianShun\02_software\24_toolchain\Xuantie-900-gcc-elf-newlib-mingw-V3.0.1\bin'
   }
   
   读盘模式{
       u32 usb_mode;
       res_image_show(R_ID_IMAGE_PCCAM_MODE, 1);
       usb_mode = USB_DEVTYPE_COMBINE;
       usbDeviceOp.ui_show_state = 0;
       task_com_sound_wait_end();
   
       dusb_api_Init(usb_mode);
       usbDeviceOp.usb_process_flag = 1;
   }
   
   other{
       git reset --soft HEAD^
       Cjs416@JSON
       小写转大写：
       Ctrl + Shift + U
       大写转小写：
       Ctrl + U
       cd /d D:\Projects\Test
   }
   
   一周项目{				
       20260629{
           未完成：
           {
               H0635-HC,//需要原厂处理，
               H0694-TB,//需要原厂处理，
               H0892-HC,//需要测试验证问题，
               H0812-HC,//摩托车无屏，3508E，
               H0620-HC,//摩托车带屏，3506F,
           }
           已完成：H0694-ACC,H0654-HC,H0635-HC,
           在做：
           等待：H0694-TB，
       }
       
       20260708{
           未完成{
               
               
           }
           
           已完成：
           在做：
           等待{
               H0694-TB,//有需求，等待处理；//等待原厂回复；
               H0694-YC,//卡顿问题，等原厂处理
               H0812-HC,//摩托车无屏，3508E，重新画板，
               H0634-TH,//屏有残影,等寄屏过来
               H06165-HC,//3.16屏幕，等客户确认，
               H0892-HC,//3508E,使用高分屏,等硬件支持，
               H0620-HC,//摩托车带屏，3506F,//优先，等硬件支持，
               504A1-BH,//添加按键，等待客户确认；
               Y17-ShenDK,//3303需求，等待原厂确认，
           }
       }
   }
   
   金子{
       1141.24 * 0.1 = 114.124;
       1141.24 - 114.124 = 1027.116;
       
       1247x10%=124.7;
       1247-124=1123;
       
       872:2K;
   }
   
   待购买的东西{
       1、两双运动鞋；
       2、远程开机设备（分享）；
       3、裤子；
   }
   
   电池{
       //0 <= b < 1:关机
       //1 <= b < 2：BATTERY_STAT_1
       //2 <= b < 3：BATTERY_STAT_2
       //3 <= b < 4：BATTERY_STAT_3
       //4 <= b < 5：BATTERY_STAT_4
   }
   
   独白{
       在持续混乱中，依然能维持秩序感；
       执行模式改为调度模式；
       一段时间只推进一个核心任务
       统一回复消息
       给自己连续专注时间
       哪些在做
       哪些等待
       哪些暂停
       哪些需要反馈
       哪些先给阶段结果
       
       首先，我应该暂停看消息，专注处理问题，
       
       起床困难问题{
           1、闹钟远离床；
           2、起床坐起来；
           3、拉窗帘；
           4、喝口水；
       }
   }
   
   屏IO口{
       CLK(WR) :PG13
       RS(HS)  
       CS(DE)  :PA4
       TE(VS)  
       --------
       D0      :PD6
       D1      :PD7
       D2      
       D3      
       D4      
       D5      
       D6      
       D7   
   }	
   
   维护项目{
       done HC_03L_带WIFI_S-三录-314A-关闭夜视_L-3049_R-4K_LA-中文-带声控_P-中性小黄车_F-加密_v1.5.0_20260701-1144.7z
       
       done 3寸+三录+带WiFi+加密+小黄车+默认英文+分辨率1080P+9161+314A+关闭夜视+删除App容量+App显示1080p
       
       done 2寸4录+不带WiFi+默认1080P+默认英文+7789+314A+不带声控+中性开关机画面
       
       done HC_03L_带WIFI_S-三录-314A-关闭夜视_L-3049_R-4K_LA-中文-带声控_P-中性小黄车_F-加密_v1.5.2_20260706-1032.7z
       
       done BH-84A3_带wifi-ASR_L-FL7707_S-DVP-2083_LA-英语_R-4K_P-welcome_T004_20260707-1406.7z
       
       done @海晨 3寸4录的主板，改一个三录的软件（车内是左边这个）+WiFi+3049+2083+默认英文+分辨率1080P+修改按键定义
       
       done Y17-3303-HC，默认4K，Wifi默认打开，内存卡不能显示多少G，WIFI名称：HiDvr打头。
       
       done HC-H0694_不带wifi_L-88577_S-2lu-mipi-3238_R-1440P_LA-英语_P-welcome_T075_20260626-1406
   }
   
   
   华创项目{
       1、H0654,H0634换RGB屏;优先搞1，
       2、H0812,无屏，摩托车，3508E，
       3、H0620,带屏，摩托车，3506F,
       4、H0635,5路，7701，3506F,优先搞2，
       5、H0892,3508E,双分屏压缩，不读卡，
       6、H06165,3.16屏幕,
   }
   
   单线wifi问题{
       这个3508E AVora 2.1.0和1.2.6 两个SDK，单线wifi，
       对于ASR WIFI模组，可以搜到wifi，不能连接，
       对于ZTOP WIIF模组，搜不到WiFi，打印如下，
       
       现在wifi中断用PA13，还是搜不到wifi，
       打印如下，
   }
   
   单线wifi{
       wifi data1:PG6
       卡和wifi都是一线：wifi data1中断PA13
   }
   
   H0634-按键{
       mode:ok,0k,
       up:up,up,
       down:mode,down,
       menu:down,mode,
       power:power,power,
   }
   
   毅芯铭{
       rt_pwm_set(sg_pwm_dev, 0, (1000000000U / 1000) , (1000000000U / 1000) * 10);
                                 (1000000000U / BSP_LCD_BL_PWM_FREQ) 
   }
   
   车内卡顿的问题{
       SDK:AVora 2.1.0
       项目：H0694
       大核，1280x320屏，录像时，车内卡顿，视频如上；
       公版测试也有问题，sdk如下；
   }
   
   鸿兴问题{
       1、H0694 AVora 2.1.0 1280x320屏幕，车内卡顿；
       2、H0694 AVora 2.1.0 acc功能，不接acc上电不开机；
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   