````c
print{
    deg_Printf("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
    hx_printk("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
        
   //JSON-----------------------START:
   
   //JSON-------------------------END
   
    //JSON-TIPS：某些客户不需要升级后自动格式化功能
   }
   
   Avora{ 
   OR1K_GCC_PATH = r'D:\ChenJianShun\02_software\24_toolchain\hx330x-gcc-elf-newlib-sf-mingw-V4.9.1\bin'
   RISCV_GCC_PATH = r'D:\ChenJianShun\02_software\24_toolchain\Xuantie-900-gcc-elf-newlib-mingw-V3.0.1\bin'
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
       20260410{
           1、H0694,一个一个问题看，效果怎么样了,模糊；录像时间还不够准确；
           2、H0892,3508C;
       }
       
       20260411{
           HC_03L_带WIFI_S-双录-314A-打开夜视_L-3049_R-1296P_LA-英语_P-中性黄车_F-加密_v0.9.9_20251229-1040.7z
           
       }
       
       20260415{
           H0892,//时间
           X5005，//更新多国语言
           DVR410,//等待，ok
           
           0204，//更新sdk看看
           H0694，//尝试，简单
           sy02,//等待，
           DC228,//已给软件
           
           送样：X5005,DC228,0204,H0892,
           出货：H0694,sy02,DVR410,
           
           1、sy02,//等新主板
           2、H0694,//3路等原厂
           3、X5005,
           4、0204,
       }
       
       20260420{
           送样：X5005,DC228,0204,H0892,
           出货：H0694,sy02,DVR410,
           
           1、H0694,//3录
           2、sy02,//需求
           3、DVR410,//需求
       }
   }
   
   鸿芯群问题{
       1、检测TE，超时复位屏幕（HX330x_SDK_2M_TE_timeout_test）；
   }
   
   金子{
       1141.24 * 0.1 = 114.124;
       1141.24 - 114.124 = 1027.116;
   }
   
   待购买的东西{
       1、两双运动鞋；
       2、向日葵远程开机设备（分享）；
   }
   
   目标{
       1、每小时喝一次水，每次喝100ml；
       2、每日早上重启一次电脑；
   }
   
   喝水{
       20260313-1617:50ml；
                1636:25ml；
                1657:25ml；
                1734:25ml;200ml;
                1738:厕所；
                1749:25ml；150ml；
   }
   
   
   
   X5005需求{
      1、多国语言；//ok
      2、添加图标；
      3、分辨率切换摄像头；//等原厂
      4、添加补光灯调节亮度；//ok
      5、播放视频；//等原厂
      6、wifi界面客户定制；
      
      1、4,//ok
      3、5,//原厂处理
      2,//处理
      6,//问问
   }
   
   DVR410按键{
                   MENU,
       power，	OK,	MODE,	UP,		MODE,
                   UP，
                   
                   right 改成ok
                   ok改成LEFT
                   DOWN改成RIGHT
                   menu改成up
                   uP改成down
                   LEFT改成menu
   }
   
   flip{
       110100
   }
   
   DVR410寄存器{
       0xC5
       0x15
   }
   
   DV410问题{
       1、usb模式去掉设置；
       2、改开关机画面；//给出开关机画面,ok
       3、开机默认录像模式，//（什么项目符）；,ok
       4、向上键切换模式；//颜色滤镜是长按吗；，ok
       5、无法拍照问题；
       6、去掉多余的功能；//ok
       7、优化效果和UI；//在优化，ok
       
       2，
       5，
       6，
       7，
       
       2、开关机画面没有给；
       3、项目符是指什么；
       4、上键是颜色滤镜功能，需要改成模式吗；
   }
   
   DC228C原厂{
       【项目代号】：DC228C
       【客户需求】：调H63摄像头
       【软硬环境】：3508C camera 0.0.16
       【应用市场】：相机
       【问题描述】：开机大概率不出图，或者出图卡顿
   }
   
   拍照失败{
       380:216
       190:108
       95:54
       16:9
       x * y = 8000000
       x : y = 16 : 9
       3776
       2128
           8-12M,14M,
       4:3,
       
       宽和高都需要是16的倍数
       
       相乘的值需要是固定的值
       
       宽高满足4:3；
   }
   
   H0694{
       1、更新到1.2.5；
       2、两个需求；
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
````