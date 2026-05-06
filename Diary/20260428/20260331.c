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
		H69,
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



x5005图片{
	956,132，143%
}

wifi卡顿{
	wifi卡顿的问题：
	原厂给出方案，说当前ASR的wifi模块，使用vga的后拉，4路录像，wifi预览正常，建议是先配vga的后拉出货；
	后面生产，使用兆通微的wifi模块，可支持4路720P后拉录像，wifi预览不卡顿；
}

wifi模组{
	50个样品（wifi模组）
}

wifi问题{
	关于wifi卡顿，原厂这边说换兆通微wifi模组，下周三会解决，4路720P后拉录像，wifi卡顿的问题，
	效果在同步进行调试，usb显示和录像的问题最迟明天会解决，看看这个时间能不能接受，或者我们再和原厂沟通。
}

声控{
	0xA5,0xFA,0x00,0x81,0x11,0x00,0x31,0xFB  // 我要拍照:	
	0xA5,0xFA,0x00,0x81,0x13,0x00,0x33,0xFB  // 打开屏幕:	
	0xA5,0xFA,0x00,0x81,0x15,0x00,0x35,0xFB  // 关闭屏幕:	
	0xA5,0xFA,0x00,0x81,0x17,0x00,0x37,0xFB  // 打开录音:	
	0xA5,0xFA,0x00,0x81,0x19,0x00,0x39,0xFB  // 关闭录音:	
	0xA5,0xFA,0x00,0x81,0x21,0x00,0x41,0xFB  // 显示前路:	
	0xA5,0xFA,0x00,0x81,0x23,0x00,0x43,0xFB  // 显示后路:	
	0xA5,0xFA,0x00,0x81,0x25,0x00,0x45,0xFB  // 显示左路:	
	0xA5,0xFA,0x00,0x81,0x27,0x00,0x47,0xFB  // 显示右路:	
	0xA5,0xFA,0x00,0x81,0x2B,0x00,0x4B,0xFB  // 显示四路:	

	0xA5,0xFA,0x00,0x81,0x29,0x00,0x49,0xFB  // 关机:
	0xA5,0xFA,0x00,0x81,0x1B,0x00,0x3B,0xFB  // 视频加锁:	
	0xA5,0xFA,0x00,0x81,0x1D,0x00,0x3D,0xFB  // 开始录像:	
	0xA5,0xFA,0x00,0x81,0x1F,0x00,0x3F,0xFB  // 停止录像:
	
#define TAKE_THE_PICTURE "0081110031FB"//我要拍照
#define OPEN_THE_SCREEN  "0081130033FB"//打开屏幕
#define CLOSE_THE_SCREEN "0081150035FB"//关闭屏幕
#define OPEN_THE_MIC     "0081170037FB"//打开录音
#define CLOSE_THE_MIC    "0081190039FB"//关闭录音
#define LOCD_THE_VIDEO   "00810A002AFB"//视频加锁

#define TAKE_THE_PICTURE "0081110031FB"  // 我要拍照:	
#define OPEN_THE_SCREEN  "0081130033FB"  // 打开屏幕:	
#define CLOSE_THE_SCREEN "0081150035FB"  // 关闭屏幕:	
#define OPEN_THE_MIC     "0081170037FB"  // 打开录音:	
#define CLOSE_THE_MIC    "0081190039FB"  // 关闭录音:	
#define SHOWE_THE_FRONT  "0081210041FB"  // 显示前路:	
#define SHOWE_THE_BACK 	 "0081230043FB"  // 显示后路:	
#define SHOWE_THE_LEFT 	 "0081250045FB"  // 显示左路:	
#define SHOWE_THE_RIGHT  "0081270047FB"  // 显示右路:	
#define SHOWE_THE_FOUR 	 "00812B004BFB"  // 显示四路:
}

通海{
	1、修改按键定义；
	2、分辨率；
	3、修改曝光补偿；
	4、删除补光灯；
	5、修改版本号；
	6、删除蓝色空白；
}






