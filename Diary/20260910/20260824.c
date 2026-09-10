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
       12306：Cjs416JSON
       小写转大写：
       Ctrl + Shift + U
       大写转小写：
       Ctrl + U
       cd /d D:\Projects\Test
   }
   
   一周项目{				
       20260810{
           未完成{
               Y300-XAK,//点亮
               H6365,//
           }
           已完成：
           在做：
           等待{
               等待客户{
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
               H0634-HC,//ASR usb闪的问题，切到最新测试，
               H0812-HC,//20C3,
               N88-CD,//添加缩时录影,
               9049-35-CD,//后拉；
               84A3-newUI-BH,//卡顿
               84A3-oldUI-BH,//噪点
               84A2-BH,//
               H0812,//
               }	
               等待硬件
               H0694-3lu-HFKJ,//
               等待原厂
               9049-33-CD,//停车唤醒异常的问题，
               等屏厂支持
               灯sensor厂支持
               84A3-oldUI-BH,//噪点
               N89-CD,//添加缩时录影,
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
   }
   
   屏IO口{
       CLK(WR) :     PG13
       RS(HS)  :     PG14
       CS(DE)  :     PA5
       TE(VS)        PA4
       --------      
       D0      :     PD6
       D1      :     PD7
       D2            
       D3            
       D4            
       D5            
       D6            
       D7            
   }	
   
   维护项目{
       done HC-H0694_不带wifi_L-88577_S-2lu-mipi-3238_LA-英语_P-welcome_T073_20260625-1554 这个软件调一下  默认西班牙语
       done N88_1.2.6_wifi_L-NV3049F-2083_LA-西班牙-4K_大核_开机-SEISA_添加屏幕复位次数和延迟_20260625_v153 @海晨 帮忙加急先改一下这版 要求：1、2083带重带WIFI   ；2、英文3、中性开机画面；4、2K；
       done HC-H0694_带wifi-asr_L-9703_S-3lu-mipi-2083_LA-英语_P-welcome_3L008_20260609-1542，改ZTOP wifi，去掉声控图标，
       done BH-84A3_带wifi-ASR_L-FL7707_S-DVP-2083_LA-印尼语_R-4K_P-welcome_T010_20260818-1410.7z 这版本卡顿和自动切换的路测正常了，带WIFI 语言默认英文的和不带WIFI 英文的同步更新下。
       done N89-SDK1.2.6_BF20a6_nv3049_大核wifi_无开机画面音量-修复关机时接入USB不会开机-2K_中文_260629_v2.0
       done 84A3 不带WIFI :  1. 旧UI的更新下分辨率默认1440P。2. 更新新UI 中性英文。3. 新UI  更新中性LOGO，语言默认印尼语。 共三版软件
       done 默认法语，分辨率2k，中性开机画面 N89-SDK1.2.6_BF20a6_nv3049_大核wifi_开机中性-解决白屏和720卡顿问题-2K_中文-v1.7@海晨 出一版默认法语软件
       done 陈工  这个软件灯你要看看改下 接电源开机关机都闪，改成开机亮，关机灭，  还有接电池 也没有用灯也不亮，你那边在看看
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
   
   影路达项目：{
       影路达：
       已完成，客户确认：
       H06165,//王工已更新完，
       H0635,//王工已更新完，
       H0620,
       H0892-902,
       H0634,//usb问题，
       H0812,
       H0842,
       
       在处理：
       摩托车：
       H0620,//原厂看
       
       流媒体：
       H0892-903,//3508E,
       H06364-HC,//3502E,
       
       
       锋生：
       sy02,//洪工在确认
       
       王工处理：
       
   }
   
   rtc电压{
       电池电压4v，
       rtc电压：3.93，
   }
   
   3502E主控{
       H0654,//改3502E主控，
   }
   
   鸿兴芯片封装{
       14，56；
       17，68；
       22，88，
       12，20，32；
   }
   
   RGB屏{
       LCD_SCL:PD14
       LCD_SDA:PD13
   }
   
   时间{
       0424,
   }
   
   好风科技需求{
       wifi名称改成ROYAL；
       去掉ACC；
       3.48V低电压能拉到3.8V；
   }
   
   关机电池功耗{
       10多uA；
   }
   
   飞线{
       黄色：reset;
       红色：VDD;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   