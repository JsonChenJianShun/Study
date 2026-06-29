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
   
   项目{			
       20260616{
           H0694-YC,0204-TH,H0694-XLS,H0694-HFKJ,84A3-BH,
           在做：H0694-YC,0204-TH,
           等待：84A3-BH,H0694-XLS,H0694-HFKJ,
       }
       
       20260622{
           未完成：
           完成：0204-TH,84A3-BH-GPS,H0694-HFKJ,
           在做：
           等待：
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
   
   
   
   
   好丰科技{
       1，回放界面右边RECA等英文改为中文  前摄文件和后摄文件
       2，WIFI连接手机后会自动不录像/是否有挑卡行为(待我方会多次验证)
       3，WIFI连接手机后预览界面前摄效果很差，不如后摄效果
       4，水印LOGO缩小原来的3/4，现显示效果过大，显示效果不要有白底，只显示徒步天下 四个字
       5，开关机画面带修改
       6，下方一排7个黄颜色图标请提供原图，我这边会更改绿色替换
       7，缩时录影功能待验证
       
       需要完成：3，
       正在处理：3，
       
       已完成：1，2，4，5，6，
       客户需要测试：2，7，
       
       {
           STR_SET_MUSIC
           STR_SET_FRONT_CAMERA
           Rear camera
           STR_SET_REAR_CAMERA
           Front camera
       }
   }
   
   mipi 屏{
       #define IMG_WIDTH     		480
       #define IMG_HEIGHT      	640
       #define TFT_HACT			IMG_WIDTH//480
       #define TFT_VACT			IMG_HEIGHT//640
       #define TFT_HS_WIDTH		10							//HPW
       #define TFT_H_START			(TFT_HS_WIDTH+50 )			//HPW+HBP//60
       #define TFT_H_END			(TFT_H_START + IMG_WIDTH)	//HPW+HBP+HDE//60+480//540
       #define TFT_H_PERIOD		(TFT_H_END+50 )			//HPW+HBP+HDE+HFP//540+50//590
   
       #define TFT_VS_WIDTH    	(4)		                	//VPW
       #define TFT_V_START    	 	(TFT_VS_WIDTH+20 )         //VPW+VBP  //Please note: + value must be either 32 or greater than 32.//24
       #define TFT_V_END      		(TFT_V_START + IMG_HEIGHT)  //VPW+VBP+VDE//24+640//664
       #define TFT_V_PERIOD    	(TFT_V_END+20 )            //VPW+VBP+VDE+VFP//664+20//684
   
       #define TFT_VSA             TFT_VS_WIDTH//4
       #define TFT_VBP             TFT_V_START - TFT_VS_WIDTH//24-4//20
       #define TFT_VFP             TFT_V_PERIOD - TFT_V_END//684-664//20
   
       #define TFT_HSA             TFT_HS_WIDTH//10
       #define TFT_HBP             TFT_H_START - TFT_HS_WIDTH//60-10//50
       #define TFT_HFP             TFT_H_PERIOD - TFT_H_END//590-540//50
   }
   
   工作{
       done HC-H0694_不带wifi_L-9703_S-2lu-mipi-2083_LA-英语_P-welcome_T045_20260422-1005 这个软件logo改成 KOS做下软件
       
       done 陈工这个84A3的WiFi改个WiFi的给我，WiFi芯片换那个ztop9101s的
       
       done 这个不带WIFI更新LOGO的需求帮忙更新下
       
       done 3寸+三录+加密+WiFi+默认葡萄牙语+分辨率1296P+9161+314A+关闭夜视+删App卡容量+小黄车
       
       done HC_03L_带WIFI_S-三录-314A-关闭夜视_L-3049_R-1296P_LA-西班牙语_P-VESRY_F-加密_v1.3.8_20260610-1620.7z
       这个软件改小黄车开关机画面+默认中文+分辨率4K（选项4K/2K）+声控+APP分辨率默认4K+删除内存容量
   }
   
   3238模组{
       1、固定ae；
       2、飞线，用工具连；
   }
   
   3238驱动{
       0xfb,//版本
       blc//关掉，没问题
       0x5f,0xa3,//把blc关掉
       0x5f,0x21,//把blc自动改成手动
       0x4d,0x06,0x00,0x04//需要写成0x00,0x04(去坏点);
   }
   
   3303问题{
       Avora 2.1.0 插后拉，前路屏出图卡死，vga和720是一样的问题，打印如上；
   }
   
   维护软件{
       3寸+双录+带WiFi+加密+小黄车+默认越南语+分辨率1296P+9161+314A+删除App容量+App显示1296p
   }
   
   费用{
       2338
       3449-2338
       1111
       
       1035
       109.94 152.81 262.75
       1035 + 262.75 1297.75
       
       1297.75-1111=186.75
   }
   
   华创项目{
       1、H0654,H0634换RGB屏;优先搞1，
       2、H0812,无屏，摩托车，3508E，
       3、H0620,带屏，摩托车，3506F,
       4、H0635,5路，7701，3506F,优先搞2，
       5、H0892,3508E,双分屏压缩，不读卡，
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
   
   OTG功能{
       SDK:HX330X_WIFI_20241018_e36d957
       PC功能，接电脑播放视频不卡顿，接手机会播放视频卡顿，
       客户希望可以连接手机，手机能播放视频，
       现在问题是，手机OTG播放视频卡顿，
       帮忙看看AVora sdk有没有处理手机OTG。
   }
   
   
   