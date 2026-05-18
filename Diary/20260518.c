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
   }
   
   项目{	
       20260424{
           1,DC228C;
           2,0204;
           3,H0634;
           4,H69;
           6,y17;
           
           y17,
       }
       
       20260425{
           1,DC228C;
           2,0204;
           3,H0634;
           4,H0694;
           5,H0892;
           6,X5005;
           
           X5005,DC228C,H0892;
       }
       
       20260514{
           1,DC228C;
           2,0204;
           3,H0892;镜头，时间；
           
           先处理0204，搞定一个；
       }
       
   }
   
   金子{
       1141.24 * 0.1 = 114.124;
       1141.24 - 114.124 = 1027.116;
       
       1247x10%=124.7;
       1247-124=1123;
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
       无意义感，不要硬撑，借势；
       单纯的；
       善于使用工具；
       效率已经很高了，所以不用着急，别人会更慢；
       伤其十指，不如断其一指；
       等待等待，养精蓄锐；
   }
   
   
   
   DC228C BUG修复{
       Buglist 0425{
           未复现：2，
           已取消：3，
           已完成：5，9，10，11，14，
           未完成：1，4，6，7，8，12，13，15，
           
           1,4,6,8,15，
           
           完成：1，4，6,12，
           未完成：7,8,13,15，
           
           7，8,15，
           
           已完成：7,8,13，15，
       }
       
       DC228C UI{
           拍照{
               已沟通不做此功能：3，4，7
               已完成：5，6，8，9，10，11，12,13,14,
               未完成：1，2，15
           }
           录像{
               已沟通不做此功能：3，4，7
               已完成：5，6，8，9，10，11，12,13,14,15，
               未完成：1，2，15，
           }
       }
   }
   
   H0892问题{
       1、驱动问题；
       2、未复现；
       3、回放UI问题；
       4、vga问题；
       5、未复现；
       6、重力感应功能；
       7、主板问题；
       8、复现在看；
       9、驱动；
       10、拍照滑动问题；
       
       3，4，6，10，
       
       1，驱动；
       2，需要时间移植；
       3，处理中；
       4，完成;
       5，移植菜单；
       6，需要时间移植；
       7，完成；
       8，未复现；
       9，驱动；
       10，完成；
       
       4，ok,
       6，ok,
       7，ok,
       10，ok，
       
       2、5能稳定复现吗有没有什么规律；
       7是说使用上个版本的主板（跟洪工沟通过）；
       
       3要处理，其它驱动更新；
       
       未完成：2,3,5,6,
       IQ问题：1,9,
       未复现：8，
       已完成：4,7,10，
       
       2,5：问原厂；
       3，处理；OK；
       6,后面移植；
   }
   
   DC228C问题{
       1、弹窗不符合，等原厂给出demo；
       2、弹窗大小；(未修改-等demo)
       3、字体大小；（已修改）
       4、ISO弹窗；（已修改）
       5、曝光菜单；（已修改）
       6、默认设置菜单；(未修改)2
       7、格式化菜单；(未修改)2
       8、日期菜单；（已修改）
   }
   
   DC228C颜色{
       蓝色：30,144,255，1e90ff
       黄色：255,224,0,ffe000
   }
   
   DC228C 录像界面问题{
       1、曝光；
       2、分辨率；
   }
   
   设置{
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_44M,			R_ID_ICON_MT20M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_42M,			R_ID_ICON_MT20M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_36M,			R_ID_ICON_MT20M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_24M,			R_ID_ICON_MT20M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_20M,			R_ID_ICON_MT20M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_16M,			R_ID_ICON_MT16M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_12M,			R_ID_ICON_MT12M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_10M,			R_ID_ICON_MT10M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_8M,			R_ID_ICON_MT8M)
       MENU_ITEM_PROC(NULL,		R_ID_STR_RES_5M,			R_ID_ICON_MT5M)
       R_ID_STR_RES_44M,	
       R_ID_STR_RES_42M,	
       R_ID_STR_RES_36M,	
       R_ID_STR_RES_24M,	
       R_ID_STR_RES_20M,	
       R_ID_STR_RES_16M,	
       R_ID_STR_RES_12M,	
       R_ID_STR_RES_10M,	
       R_ID_STR_RES_8M,	
       R_ID_STR_RES_5M,	
   }
   
   内窥镜问题{
       sdk:HX330X_SDK_WIFI_beta_20250103_v1.0.0
       方案：内窥镜；
       720P后拉不出图，打印如下；
   }
   
   DC228 v013问题{
       1、是删除菜单要做成一样的吗；
       2、变化不明显，实际是有变化的，具体要什么效果；
       3、不支持自动，对比机也没有；
       4、是需要做一样的滑动条吗；
       5、拍照计数器是什么；
       9、10、我这边关机是正常的；
       11、没有复现，帮忙拍视频过来；
       
       2、是要有明显变化吗，这个变化没有很大；
       3、原厂不支持；
       4、需要原厂处理，时间需要沟通；
   }
   
   点击弹窗外关机问题{
       Sdk:hx35xx_car_sdk_v0.0.19_branch_sensor_src_20260424
       点击弹窗外，会强制关机的；
       打印如下，视频如下；
   }
   
   DC228c buglist{
       7，8、问题有确认吗；
       9、视频没有发出来；
       14、多国语言是指多国语言菜单吗；
       15、不插卡，比例是正常的，可以删除菜单的vga选项；
       20、特效果是什么；
       21：单机图像校准功能是什么；
       
       15、不插卡拍照，在回放看就是实际效果；
       20、特效只能在拍照界面使用，录像界面有什么意义吗；
   }
   
   DC228C 项目{
       {
       1，修改窗口；
       2，问原厂；
       3，取消；
       4，修改滑动条；
       5，SD卡显示；
       6，修改窗口；
       7，等客户回复；
       8，等客户回复；
       9，按键调用；
       10，修改窗口；
       11，修改调用；
       12，已完成；
       13，修改默认设置；
       14，修改顺序；
       15，等待客户回复；
       16，修改宏；
       17，修改窗口；
       18，修改窗口；
       19，修改窗口；
       20，等待客户确认；
       21，等待客户确认；
       }
       
       {
       开始处理：5，9，13，14，16，
       等待客户确认：7,8,15,20,21，
       修改窗口：1,4,6，10，11，17,18,19，
       已完成：3，12，
       问原厂：2，5，
       
       5,9,13,14,16，
       解决：5,9,13,14,16，17,18,19
       
       17,18,19,
       
       开始处理：1，5,6,10，
       等待客户确认：7,8,15,
       修改窗口：1,4,6，10，
       已完成：2，3，9，11，12，13，14，16，17,18,19，
       后面处理：20,21，
       }
       
       已完成：1,2，3，4,5,6,9，11，12，13，14，15,16，17,18,19，
       等待客户确认：7,8,
       未完成：10，20,21，笑脸
       开始处理,
       原厂处理：10，
       
       先处理简单的，易处理的；
       处理中：
   }
   
   拍照模式菜单{
       分辨率，
       防手抖，
       曝光；
       ISO，
       多国语言，
       日期，
       自动关机，
       频率，
       
       声音，
       格式化，
       默认设置，
       版本号，
       
           case PHOTO_STATE_MENU_IMAGE: 	uiOpenWindow(&menuImageWindow,0,1,	 &MENU(image));	   break;
           case PHOTO_STATE_MENU_SHAKING: 	uiOpenWindow(&menuShakingWindow,0,1, &MENU(shaking));  break;
           case PHOTO_STATE_MENU_EV: 		uiOpenWindow(&menuEVWindow,0,1,		 &MENU(EV)); 	   break;
           case PHOTO_STATE_MENU_ISO: 		uiOpenWindow(&menuISOWindow,0,1,	 &MENU(ISO));	   break;
           case PHOTO_STATE_MENU_LANG: 	uiOpenWindow(&menuLangWindow,0,1,	 &MENU(lang));	   break;
           case PHOTO_STATE_MENU_DATE: 	uiOpenWindow(&menuDateWindow,0,1,	 &MENU(date)); 	   break;
           case PHOTO_STATE_MENU_POWER: 	uiOpenWindow(&menuPowerWindow,0,1,	 &MENU(power));    break;
           case PHOTO_STATE_MENU_HZ: 		uiOpenWindow(&menuHZWindow,0,1,		 &MENU(HZ)); 	   break;
           case PHOTO_STATE_MENU_VOICE: 	uiOpenWindow(&menuVoiceWindow,0,1,	 &MENU(voice));    break;
           case PHOTO_STATE_MENU_FORMAT2: 	uiOpenWindow(&menuFormat2Window,0,1, &MENU(format2));  break;
           case PHOTO_STATE_MENU_DEFAULT2: uiOpenWindow(&menuDefault2Window,0,1,&MENU(default2)); break;
           
   
   }
   
   拍照总张数{
       Sdk:hx35xx_camera_sdk_v0.0.16_20260228
       这个SDK想要计算拍照的总张数，可以怎么处理；
       需要根据当前的剩余容量和图片分辨率计算，动态变化；
   }
   
   84A3问题{
       84A3 wifi老化问题点：1.前镜头闪干扰线条。2.屏幕慢慢的暗屏到黑屏。3.录像到59秒卡死，不循环录像。4.屏幕触摸会自动跳点切换视窗。
       1、单独电源供电；2、对换好屏测试；3、录像卡死，我这边看看；4、换TP，拔卡测试；
   }
   
   
   
   sy02{
       AVora 1.2.3
       打开wifi，不录像拍照(taskRecordPhotoTake())会失败，帮忙看看是什么原因；
       打印如下；
   }
   
   sdk 容量{
       450 320
       45 32
       6x8 6x5
   }
   
   缩放16x{
       100,98,95,93,90,88,85,83,80,78,75,73,70,68,65,63,60,58,55,53,50,48,45,43,40
       100,98,95,93,90,88,85,83,80,78,75,73,70,68,65,63,60,58,55,53,50,48,45,43,40
               1,		2,		 3,		  4,       5,       6,       7,    8, 9,	
   100,96,92,88,84,80,76,72,68,64,60,56,52,48,44,40		
   }
   
   84A3{
       改成3.0v;
   }
   
   
   
   
   
   
   
   
   
   
   
   