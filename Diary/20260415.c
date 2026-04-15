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
       20260407{
           sy02,//按键双击，END
           x5005,
           H0694,//等待原厂
           H69,
           DC228,//两个adkey
           K5,
           
           1、sy02,DC228,
           2、x5005，H69,K5,
           3、H0694,
       }
       
       20260409{
           1、H0694
       }
       
       20260410{
           1、H0694,一个一个问题看，效果怎么样了,模糊；录像时间还不够准确；
           2、H0892,3508C;
       }
       
       20260411{
           HC_03L_带WIFI_S-双录-314A-打开夜视_L-3049_R-1296P_LA-英语_P-中性黄车_F-加密_v0.9.9_20251229-1040.7z
           
       }
       
       20260415{
           3508C,//先问原厂，
           X5005，
           DVR410,//等待，
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
   
   
   
   usb{
       前：1080P,mipi
       后：720P,usb
       左：VGA,usb
       右：VGA,usb
   }
   
   DVR410{
       CLK(WR):PF1
       RS(HS):PF2
       CS(DE):PF4
       TE(VS):PF3
       
       D0:PD5
       D1:PD6
       D3:PD7
   }
   
   ZH屏 {
       vdd:3.45
       lcd_D7:1.89
   }
   
   I {
       ohohohoh,rest rest rest,hahhaahha,wait wait wait,iii,rest rest rest,well well well,cool cool cool,hahahhahahah,ok ok ok ,good good good,
   }
   
   DVR410屏{
       DVR410复位IO:PA6
       0x3a,0x05,
       0x36,0x00,
   }
   
   DVR410多国语言{
       小五，
   }
   
   DC228项目问题{
       1、预览连续放大；
       2、回放连续，上下移动查看；
       3、连拍功能设置；start
       4、延时拍照设置；
       5、摄像头报错；
   }
   
   比例{
       320:240
       1280:720
       
       960:720
       1280 - 960 =
       960 + 160 = 1080
       
       1920:1080
       320:240
       
       192: 108
       86:54
       43:
       4:3
   }
   
   DC228{
       1.开机画面用我发的那个VIVITAR的黑白图
       2.自拍设定后，按快门，屏中间要开始倒计时，并每秒响Beep声，同时灯每秒闪亮一下，后1.5秒或2秒，灯和Beep节奏急促一点
       3.快捷删除时，能让看到最后那张图片或录像文件吗？因为这个时候还需要给用户机会，看图是否真删除
       4所有模式，系统开机时间不要显示，该位置显示拍照剩余张数或声音时间，以及录像计时。
       5.电池放到右下角，电池前面合适距离放卡图标，其他图标都在顶行均匀分布，【所有模式，分辨率放在模式图标旁边】
       6.长按放大缩小需要连续ZOOM，需要进度调表示放大了多少，目前是录像模式上下键上放大缩小，有专门的TW按键
       7.拍照模式和录像模式都按放大缩小键进行操作，录像模式也需要开关灯
       8.拍照模式不要显示那个MicPhone符号
       9.录像也是用顶端的快门键进行
       10.回放模式显示也乱，图标按前述规律放，电池，卡图标下移，文件序号放到顶行靠右的边，不用显示文件名（即使显示，也和序号右对齐）
       11.那个闪电符号和下面那个不知名符号，不要在回放模式显示，
       12.录像播放时间放到底部靠中间位置
       13.播放视频，需要有开始，暂停，结束 快进，快退  5个状态，并有相应状态显示
       14.回放的照片，也需要放大缩小，放大后，按上下左右可以移动显示区域，要显示放大倍数，和当前显示的区域在的标示（大矩形框表示整张图，小方块表示当前显示的内容，相对大小代表了放大程度）
       15.你们的那些特效，变形等功能，放到OK键上，供客户参考选择
       16.影像倒了
       
       1,7,8,9,11,16,
       2,4,5,10,12,15,,
       3困难，13图标，14困难，6图标，
       
       6，
       13，提供图标
       
       4，//已隐藏，录像时间正常,ok
       5，//ok,
       10，//ok,
       12，//ok
       15，//特效，变形是什么,ok
       
       3，14，
   }
   
   摄像头翻转{
       00000000
       00001000
       00001100
   }
   
   3508C 1.24{
       AVora 1.2.4能支持以下配置吗？
       主控：3508C
       屏：1280x320（可放大）
       前1080+vga
   }
   
   