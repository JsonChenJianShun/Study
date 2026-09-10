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
       20260803{
           未完成{
               H0812-HC,//20C3,
               H0635-HC,//5路，添加dvp sensor，
               
               N88-CD,//添加缩时录影
               N89-CD,//添加缩时录影
           }
           
           已完成：
           在做：
           {
               
           }
           等待{
               //等待客户
               {
               504A1-BH,//添加按键，等待客户确认；
               Y17-ShenDK,//3303需求，等待客户确认，
               H0694-YC,//卡顿问题，等修改车内帧率
               H0694-XAK,//点屏，
               H0654-XAK,//合3049屏驱动，
               8405-LMT-CD,//添加缩时录影；
               H0694-YC,//功能需求,
               H0694-TB,//缩时录影时间
               HP181-HC,//更新SDK，
               H0694-3lu-TB,//等待客户升级，
               GJK100-XAK,//点RGB 3.16的屏
               H0894-HC,//3508E，录像问题，
               84A3-BH,//屏的问题，
               N82-CD,//水印问题，
               H0620-HC,//wifi功能，
               }
               
               //等待硬件
               H0892-903-HC,//新项目，配置硬件，
               
               //等待原厂
               H0634-HC,//ASR usb闪的问题，切到最新测试，
               SY02-CD,//回放下载速度问题，
               9049-CD,//停车唤醒异常的问题，
               
               //等屏厂支持
               
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
       wifi_clk:	PA2
       wifi_CMD:	PA0
       wifi_D0:	PA1
       wifi_D1:	PA3
       wifi_D2:	PA12
       wifi_D3:	PA13
   }
   
   郭总项目{
       Y17-3303,
       GJK100,3506,4lu,RGB,3.16,H0654,//改3.16的屏，
       XC403,H0635,//少一个dvp镜头，做4路，
       H0694-XAK,
   }
   
   屏电压{
       3v,
       3.38v
   }
   
   usb出图慢的问题{
       AVora 2.3.0 小核的情况下，一个usb出图很慢，这个有没有办法优化。
   }
   
   对接项目{
       一、sy02问题
       批量出货的不出图问题，帮忙先排查硬件；
       二、H0635和H06165问题
       添加5路DVP摄像头，主要问题有两个
       1、更新到最新的SDK，sdk AVora 2.3.0,稍后发出公版sdk；
       2、参照现有驱动添加驱动；
       三、H0812
       20C3异常的问题，建议问sensor厂有没有其他初始化；
       四、H0620
       app预览显示黑屏的问题，建议研究user_viidure，去掉前路的显示，直接显示usb摄像头；
   }
   
   车董要求{
   N82-2083带WIFI带重力：
   1，分辨率插值2K（2K录出来是2K，1080录出来是1080,720录出来是1080），
   2，默认泰语，
   WIFI 名称：DENGO VISION 4 WIFI 2K
   开机LOGO：DENGO
   回放水印：DENGO
   APP要同步分辨率
   之前调过另外一个N88同一客户的软件：N88_1.2.6_有wifi_L-NV3049F_LA-泰语-2K_开机ASTON带logo水印_大核_优化WiFi显示_同步APP选项_20260717_v119.3
   }
   
   排查不显示问题{
       坐标问题，排除
       翻译表问题，排除
       内存问题，排除
       
   }
   
   sy02问题{
       1、灯，开始拉不高；
       2、回放界面网速慢；
   }
   
   洪工项目{
       H0635 加BOE3049，0329,
       H0620 wifi,
       sy02 回放wifi，
       H0892 84A2,
   }
   
   影路达项目：{
       影路达：
       5路：
       H0635,
       H06165,//你在更新，
       
       摩托车：
       H0812,
       H0620,
   
       流媒体：
       H0892-902,
       H0892-903,
       
       锋生：
       sy02,
       
       通海3寸4路：
       H0634,//usb问题，
       
       王工处理：
       H06165,//你在更新，
   }
   
   sy02回放给原厂{
       SDK: AVora_car_recorder_20260417_v1.2.5
       app回放界面有问题，下面是是app的回复
   }
   
   点新屏{
       BH-84A3_带wifi-ASR_L-FL7707_S-DVP-2083_LA-印尼语_R-4K_P-中性-welcom_T007_20260731-1011
   }
   
   9049 停车唤醒问题{
       AVora 3303 重启的问题，我这边看,
       用GSENSOR_CONFIG_FLAG_USE_INT1，
       写0x22寄存器，会重启，
       用GSENSOR_CONFIG_FLAG_USE_INT2，
       写0x25寄存器，停车唤醒，没有作用
   }
   
   杨工{
       SPI屏，
       接口定义，
       初始化，
       sdk，
   }
   
   按键{
       case KEY_EVT_CLICKED(USER_KEY_OK):
       case KEY_EVT_CLICKED(USER_KEY_POWER):
   }
   
   原厂问题{
       1、重力感应写寄存器重启的问题；
       2、app回放界面，上传参数，导致缩略图和下载地址错误问题；
       3、小核状态下，usb 201摄像头出图慢甚至概率不出图，并且反复出图；
   }
   
   值变化{
       0, 1, 2,
       1, 2,
       value 是0, 1, 2,循环切换，现在是要1, 2,循环切换，用C语言写段代码
       0，1，
       0，1，
       1，2，
       1，2，
       2，0，
       2，1.
       
       1，2，
       2，1，
       0，2，
   }
   
   变化顺序{
       0，0+1，1，
       1，1+1，2，
       2，0+1，1，
       0，0+1，1，
   }
   
   紧急项目{
       紧急的项目：
       H0634,通海再催，
       H0842,王工刘总在催，
       H0635,洪工在催，
   }
   
   原厂usb出图{
       我们之前的项目（N88） ASR + 小核 + BSP_PLL_SOURCE为1，出图和显示是正常的；
       
       现在我们这个项目用的是ASR的芯片，不能使用大核，看看还有没有思路；
   }
   
   
   
   
   
   
   
   
   
   
   
   
   