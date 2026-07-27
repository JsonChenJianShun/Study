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
       # ENV_NAME = 'hx350x_or1k'
       ENV_NAME = 'hx350x_riscv'
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
       20260708{
           未完成{
               H0892-HC,//3508E,使用高分屏,读秒问题，
               H0812-HC,//摩托车无屏，点摄像头，
               
               H0620-HC,//摩托车带屏，3506F,
               
               
           }
           
           已完成：
           在做：
           {
               H0812-HC,//摩托车无屏，点摄像头，
           }
           等待{
               //等待客户
               504A1-BH,//添加按键，等待客户确认；
               Y17-ShenDK,//3303需求，等待客户确认，
               H06165-HC,//3.16屏幕，等客户确认，
               H0634-TH,//等待客户确认，
               H0694-YC,//卡顿问题，等修改车内帧率
               H0694-XAK,//点屏，
               H0654-XAK,//合3049屏驱动，
               8405-LMT-CD,//添加缩时录影；
               H0694-YC,//功能需求,
               H0694-TB,//缩时录影时间
               HP181-HC,//更新SDK，
               H0694-3lu-TB,//等待客户升级，
               
               //等待硬件
               
               //等待原厂
               
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
       可实现但又有挑战的新目标
       
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
       done HC-H0694_不带wifi_L-88577_S-2lu-mipi-3238_R-1440P_LA-英语_P-welcome_T077_20260710-1035 这个软件上改一下  默认俄文  分辨率默认4K
       done 3寸-三录+不WiFi+BOE7701+314A+小黄车+分辨率1296p+默认泰文+加密+关闭夜视
       done HC-H0694_不带wifi_L-88577_S-2lu-mipi-3238_R-4K_LA-俄语_P-welcome_T082_20260720-1044 这个软件上面语言改成默认  日文
       done 陈工。用84A3 带WIFI,带GPS的更新版1054镜头确认下效果
       done 3寸-双录+WiFi+9161C+314A+修改开关机画面+分辨率1080P+默认英文+加密+删除APP容量+app默认1080
       done 3寸-双录-带WiFi-加密-小黄车-默认中文--APP删除容量-APP显示4K分辨率-分辨率默认4K-选项4K/2k。wifi名称改为wifi-camera，类似于类似于wifi-camera-ac54-35040F（后缀可以不用一样的）-314A-9161C
       done HC-H0694_带wifi-ZYW-_L-88577_S-3lu-mipi-2083_LA-英语_P-welcome_3L014_20260617-0939 这个软件把WIFI功能删除做版软件
   }
   
   
   
   华创项目{
       1、H0654,H0634换RGB屏;优先搞1，
       2、H0812,无屏，摩托车，3508E，
       3、H0620,带屏，摩托车，3506F,
       4、H0635,5路，7701，3506F,优先搞2，
       5、H0892,3508E,双分屏压缩，不读卡，
       6、H06165,3.16屏幕,
   }
   
   Y100项目{
       Y100,mipi 2083 22pin;
   }
   
   不带主摄像头{
       AVora 2.2.0 希望不带主摄像头，两路usb双分屏，有没有办法可以处理；
   }
   
   图片格式要求{
       我们对图片格式有要求，需要是bmp索引颜色，
       颜色数量8个以下（最好是4个，我们方案对颜色总数量有限制，颜色数量越少越好），8位，
       然后背景颜色，需要是0x808080，
   }
   
   切换问题{
       开机会显示双分屏，再切换成关机记忆窗口；
   }
   
   wifi pos组{
       wifi_clk:	PA2,
       wifi_CMD:	PA0,
       wifi_D0:	PA1,
       wifi_D1:	PA3,
       wifi_D2:	PA12,
       wifi_D3:	PA13,
   }
   
   wifi模组{
       兆通微，ZTOP9101
       ASR,5505
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   