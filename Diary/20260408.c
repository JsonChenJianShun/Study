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
       Y87,3508E
       504A1,3508C,等待，
       H0892,3508C,
       X5005,3506F,等待，
       H0694,3506F,等待，
       8405，3506F,转出；
       SY02,3508C,
       
       20260327{
           504A1,点屏，
           SY02,声音，
           H0634,声控，
           
           1、SY02,在处理，
           2、504A1,已给软件
           3、H0634,声控已完成
       }
       
       20260331{
           SY02,
           H69,点亮，
       }
       
       20260402{
           SY02,
           H0694，
       }
       
       20260403{
           sy02,
           x5005,
           H0694,
           H69,
           DC228,
           K5,
       }
       
       20260407{
           sy02,//按键双击，END
           x5005,
           H0694,//等待原厂
           H69,
           DC228,//两个adkey
           K5,
           
           1、sy02,DC228,H0634,
           2、x5005，H69,K5,
           3、H0694,
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
   
   H0694{
       H0694项目问题：
       1. 上电出现usb镜头不显示，切换后可以显示
       2. 录像时间不准
       3. 四路 wifi 预览异常
       4、ASR开机UI卡顿3-4s
       5、效果需要优化
   }
   
   双击{
       AVora 1.2.3 客户想实现双击的功能，有没有demo可以参考；
   }
   
   sy02需求{
   1.修改单击摄像按键为开启/暂停录像功能
   2.修改双击摄像按键为拍照功能
   ——————
   目前软件问题点如下：
   1.单击摄像按键，开启录像功能时提示音要更新//end
   2.摄像开始时，绿色LED没有常亮//end
   3.单击摄像按键，暂停录像功能时提示音要更新//end
   4.暂停录像时，绿色LED没有闪烁//end
   5.双击摄像按键，没有启动拍照功能，且没有拍照提示音(拍照提示音使用贵司其他项目用的“咔嚓”音)
   6.长按摄像按键3s，没有打开/关闭WIFI功能，且白色LED也没对应打开/关闭//end
   }
   
   上下切换{
       resnum:18,itemsum:6;
       currentRes:18,itemResStart:18;
       itemNum:12;
       
       itemResStart = 12/6*6=12
       itemResEnd=12+6-1=17
       
       0-5
       6-11
       12-17
       
       18/6*6=18
       18+6-1=23
       18-23
       
       resnum:18,itemsum:6;
       currentRes:0,itemResStart:0;
       itemResStart = (pitemManage->currentRes/pitemManage->itemSum)*pitemManage->itemSum;
       itemNum:18;
       itemResNum = (pitemManage->resSum/pitemManage->itemSum)*pitemManage->itemSum;
       
       17,6
       0/6*6 = 0
       17/6*6=12
   }
   
   X5005需求{
       1、多国语言；
       2、添加图标；
       3、分辨率切换摄像头；
       4、添加补光灯调节亮度；
       5、播放视频；
       6、wifi界面客户定制；
   }
   
   7789屏{
       clk(WR):PG13
       Rs(Hs):PG14
       CS(DE):PA4
       TE(VS):PG15
       
       D0:PD7
       D1:PG6
       D2:PG7
       D3:PG8
       
   }
   
   双击{
       按压超过一短时间singe_time，同时一段时间内（至少是short_time）不在按压，识别为单击；
       按压一段时间singe_time，间隔短时间short_time，再按压一段时间singe_time，识别为双击；
       如和定义这个短时间short_time，这个超过多久不按算单击，
       
       key_deal大概每10ms进入一次，
   }
   