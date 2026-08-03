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
       #include "user.h"
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
       20260727{
           未完成{
               H0620-HC,//摩托车带屏，wifi显示问题
               
               9049-CD,//wifi切换显示问题，
               
               GK100-XAK,//点RGB 3.16的屏
           }
           
           已完成：
           在做：
           {
               
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
               H0812-HC,//摩托车无屏，送样中
               
               //等待硬件
               
               //等待原厂
               H0892-HC,//3508E,sd clk和powerkey复用问题
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
       done HC-H0694_带wifi-_L-88577_S-3lu-mipi-2083_LA-中文-声控_P-welcome_3L019_20260725-1010//添加显示前路，显示后路，
   }
   
   
   
   华创项目{
       1、H0654,H0634换RGB屏;优先搞1，Y100,
       2、H0812,无屏，摩托车，3508E，
       3、H0620,带屏，摩托车，3506F,
       4、H0635,5路，7701，3506F,优先搞2，
       5、H0892,3508E,双分屏压缩，不读卡，
       6、H06165,3.16屏幕,
   }
   
   wifi pos组{
       wifi_clk:	
       wifi_CMD:	
       wifi_D0:	
       wifi_D1:	
       wifi_D2:	
       wifi_D3:	
   }
   
   wx{
       @星辰 这个软件给我一下默认英文，默认分辨率1080P（选项1080P/720P）中性logo+314A+7789+车内是华创的
   }
   
   郭总项目{
       1、Y17-3303,
       2、GK100,3506,4lu,RGB,3.16,
   }
   
   客户问题{
       1、具体什么黑边，拍视频过来看看；
       2、这个你们后面有加我们主控的开机键，看是否是这个引起的；
       3、那些存储卡有问题，提供过来，我们做兼容；
       4、没有复现，帮忙拍视频过来；
       5、这个需要跟app联系解决；
   }
   
   交接项目{
       2寸3录 Y17-3302
       2寸3录 Y17-3303
       
       3寸3录，2录，3303，03L
       
       2寸4录，0204，s105,
       
       3寸4录，H0634，屏跟03L一样的，
   }
   
   H0620 key{
       ok, F
       up,
       down,
       mode,Lmenu,
   }
   
   9049问题{
       1.仍旧存在 app上无法检测到后摄存在和不存在，app未更改，hx35可以，设备端问题，需解决-------3303和3305有架构上区别，目前3303后拉图标一直会显示存在，当热拔插的时候，刷新一下再去点击是可以刷出后拉的（通电过程中不建议去拔插后拉，容易引起烧主控的概率）
       测试：客户是否能接受该方式？
           目前客户不接受
           需要重新更改和hx35一致
           需要回复软件更改交付日期
           
       5.电脑读盘要求：A是前视摄像头采集的文件，B是后拉摄像头采集的文件
       实际查看存在IMGA IMGB RECA RECB文件夹     但是  IMGB RECB文件夹下没有任何文件，需要在  IMGB RECB文件夹下保存后拉的图片和视频文件--------------该问题已经在推进
       测试：需要回复更改交期
       
       5，已完成；
       
   }
   
   sensor{
       user_usensor20_is_open() | (user_usensor11_is_open() << 1);
       
       0001
       0011
   }
   
   usb插值{
       1080P,
       vga,
       vga,
       vga,
       
       720P,
       720P,
       
       640x480,
       1280x720,
   }
   
   鸿兴处理{
       1、ACVora 2.2.0 5路Dvp哪路，能添加加GC0329和SC030，两个IC吗
       2、群里BSP_PWRKEY_SDCARD_CLK_IO_MUX，帮忙确认下
   }
   
   帧率{
       60=pclk/((4+12+480+20)*(20+80+1920+80))
   }
   
   复位测试{
       1：1
       2：2
       3：1
       4  1
       5  1
       6  1
       7  1
       8  1
       9  1
       10 1
   }
   
   5501 wifi测试{
       1  1
       2  1
       3  0 //后路不出，掉线后上线
       4  0 //很久后上线
       5  0 //后路不出，掉线后上线
       6  
       7
       8
       9
       10
   }
   
   
   
   
   
   
   
   
   
   
   