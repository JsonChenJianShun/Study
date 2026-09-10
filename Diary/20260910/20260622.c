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
       20260604{
           在做：DC228C；
           等待：英语；
           暂停：
       }
       
       20260609{
           H0694-3508E,
           03L-声控,
           H0694-插值1080P，
           
           在做：H0694-1080P,
           等待：03L-声控,H0694-3508E,
           暂停：
       }
       
       20260610{
           在做：车董;
           等待：03L-声控,H0694-3508E；
       }
       
       20260616{
           H0694-YC,0204-TH,H0694-XLS,H0694-HFKJ,84A3-BH,
           在做：H0694-YC,0204-TH,
           等待：84A3-BH,H0694-XLS,H0694-HFKJ,
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
   }
   
   
   
   
   小窗口pip问题{
       AVora 1.2.6,1280x320的屏幕；
       客户对pip画中画功能有需求，需要后拉小窗口，
       能不能安排开发下，然后回复下时间；
   }
   
   H0694软件问题{
       0428-1003,
       H0694-3lu,
   }
   
   新录尚{
       1、具体是那些功能对不上；
       2、效果用的是那个sensor，可以让IQ再调试；
       3、回放界面，我这边再修改下；
   }
   
   车董项目{
       9049-3506
       要求已发群文档
       1，录像回放声音加大点
       2， 不用暂停录像后再进入菜单，进入菜单后录像不暂停
       （目前我们的设备是需要先按OK键暂停录像，然后再按设置键进入菜单，
       客户需求是直接按设置按键的时候暂停录像并进入设置菜单）
       3，增加音量调节功能（目前我们在设备上进行回复的时候，上下按键是来实现快进和快退的功能，
       客户希望这个位置做成音量加减的功能，并且在设置内有可以调节喇叭音量的操作）
   
       {
       CD05
       1,默认语言: 简体中文
       2,默认分辨率4K
       3，菜单选项只要4K-2K
       4，初始化日期：当天
       5，自动关屏：默认关闭状态
   
   
       M1
       1，wifi名称改为wifi-camera，类似于类似于wifi-camera-ac54-35040F（后缀可以不用一样的）
       2，语言默认简体中文 zh-CN
       3，辨率分辨率-4K.
       4，分辨率选项只要4K-2K（APP同步）
       }
   }
   
   03L声控{
       WIFI_S-三录-314A-关闭夜视_L-3049_R-1296P_LA-西班牙语_P-VESRY_F-加密_v1.2.8_20260415-1655
   }
   
   卡问题{
       3506F AVora 1.2.6
       录像视频有概率损坏；
   }
   
   新录尚问题{
       1-屏幕会黑屏，点屏幕屏会亮，，我看菜单屏幕保护是关的
       2-无光夜视打开，机器没图标显示
       3-版本号加KN970或者WT9703,和世为的9703IVO做区分，用世为的话最好改版本号    9703IVO这样就知道准确的用的什么屏，
       4-颜色还是有点偏蓝，角度比我们的样机小，
       5屏亮度再调高一点
       6屏幕上的分辨率我看着放到左边哪里有点不合适感觉放右边还好点，哪里你那个时间显示的太大，遮住了光芒[呲牙]或者把时间显示的字体改小一点，录像时间和分辨率加大一点
       7-APP 上的分辨率和菜单上的不符合，屏菜单APP要同步显示
       
       1、未复现；
       2、添加图标，先处理；
       3、已添加；
       4、角度，先对比处理；
       5、已优化；
       6、分辨率位置，先处理；
       7、app，先处理；
       8、回放图标；
       
       已完成：1、2、3、4、5、6、7、
       未完成：
       
       黄色：f6bb48;
       40x40;
   }
   
   XLS{
       1、后拉小视窗，原厂回复暂时不做开发，我这边已经跟邓总沟通过了；
       2、对比机回放有前后路切换功能，目前我们方案没有做前后路区分。新增这个功能涉及的改动比较多，具体时间需要原厂进一步评估。
       如果不是当前必须实现的功能，我这边建议先按现有方案出货，后续再规划增加。
   }
   
   位置{
       createImageIcon(PLAYVIDEOMAIN_RETURN_ID,   		Rx(115), Ry(190), Rw(24),  Rh(32), 	R_ID_ICON_MTHOME,	    ALIGNMENT_CENTER),
       createImageIcon(PLAYVIDEOMAIN_PRE_ID,   		Rx(135), Ry(190), Rw(24),  Rh(32), 	R_ID_ICON_MTHOME,	    ALIGNMENT_CENTER),
       createImageIcon(PLAYVIDEOMAIN_PLAY_ID,     		Rx(155), Ry(190), Rw(24),  Rh(32),	R_ID_ICON_MTPLAY,		ALIGNMENT_CENTER),
       createImageIcon(PLAYVIDEOMAIN_NEXT_ID,   		Rx(175), Ry(190), Rw(24),  Rh(32), 	R_ID_ICON_MTHOME,	    ALIGNMENT_CENTER),
       createImageIcon(PLAYVIDEOMAIN_SETTING_ID,   	Rx(195), Ry(190), Rw(24),  Rh(32), 	R_ID_ICON_MTPLAYSETTING,	    ALIGNMENT_CENTER),
       
       createImageIcon(VIDEO_HOME_ID,   	Rx(115), Ry(190), Rw(24),  Rh(32),	 	R_ID_ICON_MTHOME,	    ALIGNMENT_CENTER),
       createImageIcon(VIDEO_RECORDOK_ID,  Rx(135), Ry(190), Rw(24),  Rh(32), 	 	R_ID_ICON_MTRECORDOFF,	ALIGNMENT_CENTER),
       createImageIcon(VIDEO_PHOTO_ID,   	Rx(155), Ry(190), Rw(24),  Rh(32),	 	R_ID_ICON_MTPHOTO,	    ALIGNMENT_CENTER),
       createImageIcon(VIDEO_LOCKON_ID,    Rx(175), Ry(190), Rw(24),  Rh(32),  	R_ID_ICON_MTLOCK,		ALIGNMENT_CENTER),
       createImageIcon(VIDEO_MIC_ID,       Rx(195), Ry(190), Rw(24),  Rh(32),	    R_ID_ICON_MTMICOFF,		ALIGNMENT_CENTER),
   }
   
   好丰科技buglist{
       1、字体大小；
       2、默认2k；
       3、声控功能；
       4、设置菜单设置；
       5、改wifi名称；
       6、版本号显示；
       7、回放卡顿；
       8、前后路文件夹；
       9、回放缩略图显示异常；
       10、水印要求；
       11、进度条显示；
       12、缩时录影；
       13、添加摄像头前后路预览显示菜单；
       14、二维码修改；
       15、app预览；
       16、删除app菜单；
       17、主界面图标；
       
       方案反馈问题{
           3、声控功能需要硬件支持，我这边可以先软件添加；
           8、有名称可以显示，具体显示如下；
           12、ACC可以后续添加吗，暂时还有点问题；
           17、是图标的原图吗；
       }
       
       ACC处理{
           ACC功能这边还需要再评估一下时间，目前不太确定周一能否完成。为了不影响验证，我这边先把其他功能完成并提供测试版本，ACC功能后续再继续推进。
       }
       
       好丰科技问题{
           已完成：1、2、4、5、6、9、10、11、13、14、15、16、
           先处理：
           等待客户：17、
           后续处理：7、8、12、
           
       }
       
       好丰科技回复{
           好的，我这边先评估一下时间。由于ACC和文件夹功能还需要开发和验证，
           完整软件可能会比原计划晚一些提供，具体时间我评估后尽快同步给您。
       }
       
       摩托车功能{
           1 - 镜头规格：实标2K 30帧、140°大广角，无插值、无虚假参数，白天15米清晰识别车牌 夜间5米
           2防抖配置： 增加电子防抖 
           3存储功能：标配重力感应G-sensor，碰撞自动锁存视频 
           4- 开机语音播报：电量、录像状态、连接状态语音提示，骑行不低头
           
           1、不支持真实2k；
           2、不支持防抖功能；
           3、硬件添加；
           4、提供语音；
       }
   }
   
   XLS建议{
       莫工，我这里有acc和过滤前后两个文件夹两个功能，这边是打算明天，给出来的，在考虑要不要更新到v2再做；
   }
   
   无wifi{
       HC_03L_带WIFI_S-两录-314A-关闭夜视_L-HSD9161C_R-1296P_LA-英语_P-中性小黄车_F-加密_v1.3.5_20260604-1415.7z
   }
   
   回复客户{
       TP功能这边还在开发和验证，评估下来节前可能来不及完成，我这边会继续跟进，有进展及时同步。 
       不带WiFi版本的问题，您也可以先问下洪工，他那边比较熟悉。
   }
   
   通海软件{
       Y17-HC_RJ600_WIFI_L-JD9161-376x960_P-中性白车_LA-英语_F-加密_v0.1.4_20251215-1528.7z
   }
   
   
   
   
   
   
   
   
   