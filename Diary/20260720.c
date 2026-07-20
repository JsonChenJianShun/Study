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
               H0694-TB,//有需求，等待处理；//等待原厂回复；
               H0892-HC,//3508E,使用高分屏,读秒问题，
               H0812-HC,//摩托车无屏，3508E，重新画板，
           }
           
           已完成：
           在做：
           {
               H0892-HC,//3508E,使用高分屏,
           }
           等待{
               //等待客户
               504A1-BH,//添加按键，等待客户确认；
               Y17-ShenDK,//3303需求，等待客户确认，
               H06165-HC,//3.16屏幕，等客户确认，
               H0634-TH,//等待客户确认，
               
               //等待硬件
               
               
               //等待原厂
               H0694-YC,//卡顿问题，等原厂处理
               H0620-HC,//摩托车带屏，3506F,//优先，等原厂回复，
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
       done HC_03L_带WIFI_S-三录-314A-关闭夜视_L-9161C_R-4K_LA-英语_P-中性小黄车_F-加密_v1.5.3_20260706-1655(1).7z
       done HC_03L_带WIFI_S-两录-314A-关闭夜视_L-3049_R-4K_LA-中文-带声控_P-中性小黄车_F-加密_v1.5.5_20260708-0934.7z 不带wifi
       done HC-H0694_带wifi-ZTW_L-9703_S-4lu-mipi-2083_LA-英语_P-welcome_4L005_20260611-1448 这个软件做一下  默认泰文
       done HC-H0694_带wifi-asr_L-9703_S-3lu-mipi-2083_LA-英语_P-welcome_3L008_20260609-1542 这个软件做一下 默认泰文
       done 3寸-双录+WiFi+BOE3049+314A+小黄车+分辨率1296P+默认英文+关闭夜视+加密+删除APP容量+APP分辨率默认1296P
       3寸-双录-不带WiFi-加密-小黄车-默认中文--APP删除容量-APP显示4K分辨率-分辨率默认4K-选项4K/2k。wifi名称改为wifi-camera，类似于类似于wifi-camera-ac54-35040F（后缀可以不用一样的）-314A-9161C
   }
   
   
   华创项目{
       1、H0654,H0634换RGB屏;优先搞1，
       2、H0812,无屏，摩托车，3508E，
       3、H0620,带屏，摩托车，3506F,
       4、H0635,5路，7701，3506F,优先搞2，
       5、H0892,3508E,双分屏压缩，不读卡，
       6、H06165,3.16屏幕,
   }
   
   鸿兴问题{
       1、H0694 AVora 2.1.0 1280x320屏幕，车内卡顿；
       2、H0694 AVora 2.1.0 acc功能，不接acc上电不开机；
   }
   
   H06165按键定义{
       power，power，
       ok,up,
       ok,ok,
       up,down,
       menu,mode,
       
       power，
       ok,up,
       up,ok,
       down,down,
       mode,mode,
   }
   
   9049问题{
       2、声音已经最大了，看能否用声音大的喇叭；
       3、需要车充供电；
       4、需要进入菜单再退出刷新下界面；
   }
   
   上电不开机{
       SDK:AVora 2.1.0
       项目：H0694
       步骤：
       1、软件配置ACC唤醒；
       2、不接ACC，上电，稳压电源有电流，但是不开机，无打印；
       3、按复位或power键可以开机；
   }
   
   车内卡顿问题{
   现在的v06车内USB镜头帧率比前摄帧率还高，这样会造成卡顿。之前的板子上的usb镜头是15-16帧左右，现在最高25有帧率。
   为了不卡顿，usb镜头帧率需要比前摄帧率低,方法是，降低v06 usb镜头那边的出图帧率，比前摄低。
   }
   
   Y17卡顿问题{
       1、之前2寸3录（Y17 3303）出货的软件是一直会卡顿吗；
       2、2寸4录（0204）mipi 314A，会卡顿吗
   }
   
   sy02问题{
       1、不出图；//改座子；
       2、有卡可以，有卡不行；//寄卡过来；
       3、停录；//我怀疑是电源问题；
   }
   
   H061635{
       效果
       前摄：章工调；
   }
   
   王展{
       带wifi，中文带声控
       不带WiFi，中文带声控
   }
   
   客户问题{
       1、PQTOOL，需要给客户使用吗？
       2、使用taskRecord_Snapshort();函数在录像中抓拍；
       5、提高摄像头的hvblank；
       6、需要原厂后续开发；
       7、最长支支持10分钟；
       
       3、4、关于相机方面的功能，问洪工
   }
   
   {
       Y100,
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   