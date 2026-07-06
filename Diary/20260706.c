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
       20260622{
           未完成：
           完成：0204-TH,84A3-BH-GPS,H0694-HFKJ,
           在做：
           等待：
       }
       
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
       20260702：
       done HC-H0694_不带wifi_L-88577_S-2lu-mipi-3238_R-1440P_LA-英语_P-welcome_T075_20260626-1406.7z
       这个软件调一下默认俄文
       
       done HC-H0694_带wifi-ZTW_L-9703_S-4lu-mipi-2083_LA-英语_P-welcome_4L004_20260610-1045(1)
       这个软件做一下  语言默认简体中文  分辨率默认4k 带声控
       
       done HC_03L_带WIFI_S-三录-314A-关闭夜视_L-3049_R-4K_LA-中文-带声控_P-中性小黄车_F-加密_v1.4.8_20260624-2027.7z
       wifi名称改为wifi-camera，类似于类似于wifi-camera-ac54-35040F（后缀可以不用一样的）
       
       done 3寸+双录+带WiFi+加密+小黄车+默认希伯来语+分辨率1296P+BOE7701+314A+删除App容量+App显示1296p
   }
   
   
   华创项目{
       1、H0654,H0634换RGB屏;优先搞1，
       2、H0812,无屏，摩托车，3508E，
       3、H0620,带屏，摩托车，3506F,
       4、H0635,5路，7701，3506F,优先搞2，
       5、H0892,3508E,双分屏压缩，不读卡，
   }
   
   OTG功能{
       SDK:HX330X_WIFI_20241018_e36d957
       PC功能，接电脑播放视频不卡顿，接手机会播放视频卡顿，
       客户希望可以连接手机，手机能播放视频，
       现在问题是，手机OTG播放视频卡顿，
       帮忙看看AVora sdk有没有处理手机OTG。
   }
   
   报销{
       74+78+34.72+500=686.72
       686.72+113=799.72
   }
   
   按键定义{
       down,		ok,
       menu,		up,
       up,			menu/mode,
       mode,		down,
       power,		power,
   }
   
   5路问题{
       SDK：AVora 2.1.0
       我这边配置，5路DVP摄像头，读不到GC0309的id；
       AVora_car_recorder_5cam_20260417_base_v1.2.5，
       这个SDK，我替换bf0a03成GC0309,是能点亮的，
       帮忙确认下
   }
   
   sy02 IQ{
       IQ反馈说，我们的是小镜头，四边的清晰度会有衰减，
       不能做到对比机大镜头一样，这个硬件限制了。
       或者你们能不能提供同样是小镜头的对比机，我们再来调试；
   }
   
   H0635按键{
       menu,	ok,
       up,		up,
       mode,	menu,
       down,	down,
       power,	power,
   }
   
   H0635需求{
       1：主菜单 没有标志    //ok.
       2：菜单里面 工具栏不协调                     //ok.                               
       3：按键更改  //0k,
       4：加WiFi  //ok,
       5: 车内GC0309  效果有点暗，调亮点 捂住有线条能优化一下//不支持
   }
   
   
   
   
   
   
   