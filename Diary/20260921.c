JSON{
	ctrl + E:打开/关闭远控；
	git rm -r --cached
	
//JSON---------------------start:
//JSON---------------------end:
	
deg_Printf("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
}

独白{
	
}

fireware问题{
	1、没有gsesor.h，也没有usensor，可能是相机方案不需要这两个文件;
	2、resource/font/font.tab没有找到，是否不需要使用；
}

开发说明书阅读进展{
	1、编译环境，已完成 ；
	2、代码目录，缺少一些目录，其他已完成；
	3、常用的SDK文件简介，已完成；
	4、特殊IO口控制说明，已完成；
	5、；
}

备注{
	在board_bwv1.c设置屏IO口复位；
	HAL_CFG_EN_DBG，打开会影响电池满电的检测；
	HAL_CFG_MJPEG_720_SIZE_MIN，HAL_CFG_MJPEG_720_SIZE_MAX，影响图片质量或者码率；
	config.c配置默认参数；
}

作业{
	1、替换开关机logo；
	2、设置默认中文；
	3、0~9的调节窗口，上键增大，下键减小；
	
	已完成：1、2、
}

flash大小{
	4432-3797=635
	4096-635=3461
	3797-3461=336
}

.gitignore修改{
	D:\ChenjianShun\02_SDK\02_SDK\01_fireware_demo\firmware\ax32_platform_demo\Debug
	D:\ChenjianShun\02_SDK\02_SDK\01_fireware_demo\firmware\ax32_platform_demo\output
	D:\ChenjianShun\02_SDK\02_SDK\01_fireware_demo\firmware\custom
	D:\ChenjianShun\02_SDK\02_SDK\01_fireware_demo\firmware\ax32_platform_demo\ax329x_sdk.mk
	D:\ChenjianShun\02_SDK\02_SDK\01_fireware_demo\firmware\ax32_platform_demo\ax329x_sdk.txt
	D:\ChenjianShun\02_SDK\02_SDK\01_fireware_demo\firmware\ax32_platform_demo\.codelite
	
	ax32_platform_demo/ax329x_sdk.mk
	ax32_platform_demo/ax329x_sdk.txt
	ax32_platform_demo/.codelite
	ax32_platform_demo/Debug
	ax32_platform_demo/output
	ax32_platform_demo/.codelite/ax329x_sdk.tags
	ax32_platform_demo/.codelite/refactoring.db
	
	git rm -r --cached
}   

移植需求{
	在JT5295上移植AX3292的屏、摄像头和key；，错误想法；
	
	JT529X  是从 原thunder SE （AX329X）改动而来。
	Ax329x的SDK移植到JT529X的demo板子上，把屏，sensor，key调通。
	
	AX329x修改了东西，，JT5295改回AX329x，错误想法；
	
	是需要在作业3的SDK上，改成新芯片JT5295；
}

报错{
	D:/ChenjianShun/02_SDK/02_SDK/04_firmware_demo3/firmware3/ax32xx/src/ax32xx_int.c:1952:3: error: 'PMC_CFG_REG' undeclared (first use in this function)
	D:/ChenjianShun/02_SDK/02_SDK/04_firmware_demo3/firmware3/device/cmos_sensor/SENSOR_H63P.c:1033:2:
	 error: unknown field 'isp_all_mod' specified in initializer
	 D:/ChenjianShun/02_SDK/02_SDK/04_firmware_demo3/firmware3/device/cmos_sensor/cmos_sensor.c:2336:43: 
	 error: 'LCD_SENSER_RATIO_MODE' undeclared (first use in this function)
	 D:/ChenjianShun/02_SDK/02_SDK/04_firmware_demo3/firmware3/device/cmos_sensor/cmos_sensor.c:2338:2: 
	 error: too many arguments to function 'dispLayerSetFrontCrop'
	 cmos_sensor.c:(.text+0x70c): undefined reference to `sensor_frame_rate_adapt'
	 cmos_sensor.c:(.text+0x9d0): undefined reference to `isp_init'
	 
	 cmos_sensor.c:(.text+0xac4): undefined reference to `isp'
	cmos_sensor.c:(.text+0xacc): undefined reference to `isp'
	cmos_sensor.c:(.text+0xc64): undefined reference to `isp_CCM_cfg'
	./Debug/cmos_sensor_cmos_sensor.c.o:(.rodata+0x28): undefined reference to `gama'
	D:/ChenjianShun/02_SDK/02_SDK/04_firmware_demo3/firmware3/device/cmos_sensor/cmos_sensor.c:273:37: 
	error: 'null_init' undeclared (first use in this function)
	cmos_sensor.c:(.text+0x1774): undefined reference to `sensor_rotate_3a03'
	video_record.c:(.text+0xde4): undefined reference to `hal_mjpB_fc_head_chk'
	D:/ChenjianShun/02_SDK/02_SDK/05_MKL_ES09C_LT/DWL/ES06/frimware_Compare/ax32_platform_demo/taskVideoRecord.c:572:10: error: 'System_Ctrl_T' has no member named 'sigal_comD:/ChenjianShun/02_SDK/02_SDK/05_MKL_ES09C_LT/DWL/ES06/frimware_Compare/ax32_platform_demo/taskVideoRecord.c:572:10: error: 'System_Ctrl_T' has no member named 'D:/ChenjianShun/02_SDK/02_SDK/05_MKL_ES09C_LT/DWL/ES06/frimware_Compare/ax32_platform_demo/taskVideoRecord.c:572:10: error: 'System_Ctrl_T' has no member named 'sigal_com'''
stringIcon.c:(.text+0x16c): undefined reference to `drawStringExt'
}
	
项目注意事项{
	固件、SDK命名：主控型号+项目名+版本号+SVN号+日期；
	测试通过，才算结束；
	改动需要发邮件回复；
}


800张图片{
	C:\Users\jianshun.chen\Desktop\temp\2
	C:\Users\jianshun.chen\Desktop\temp\1
}

MKL-ES09C-LT{
	反馈问题：
	1、删除800张照片会重启；
	2、录像时间和回放时间不一致，且回放出现破图、快进、卡顿的情况；
	3、720P视频回放屏幕闪烁；未复现，暂不处理；
	
	复现情况：
	1、已复现；
	2、电脑时间是21分钟，回放显示是9分54s，概率复现到破图，快进；bug需修复；
	3、未复现，暂不处理；
	
	需要处理：2、
	正在处理：
	处理完成：1、
	不需要处理：3、
}

SDK分支{
	frimware_MKL-ES09-LT
}

重启思路{
	计时：看是否超过了8000ms；
}

Window11取消更多选项{
	Window11设置右键Window10的更多选项：
	以管理员身份打开命令提示符或 PowerShell，输入：
	reg add "HKCU\Software\Classes\CLSID\{86ca1aa0-34aa-4e8b-a509-50c905bae2a2}\InprocServer32" /f /ve
	taskkill /f /im explorer.exe & start explorer.exe
}

AutoHotKey快捷键{
^1::Run "D:\ChenjianShun\02_SDK"
^2::Run "D:"
^3::Run "C:"
}

开机自动打开脚本{
	启动文件夹（最简单，适合大多数脚本）
	按 Win + R，输入：
	shell:startup
	放入启动文件夹
}

删除百度网盘图标{
	打开百度网盘PC客户端，点击右上角的齿轮图标进入“设置”。

	在启动设置页面中，找到并取消勾选“在我的电脑中显示百度网盘”。

	点击“确定”保存，图标就会立即消失。
}

小米手机自动任务{
	自动任务；
}

破图的问题{
	录15s以上，看会不会破图：（1，有破图，0，没有破图）
	1080：
	1、1
	2、1
	3、0
	4、1
	5、1
	
	720：
	1、1
	2、1
	3、1
	4、
	5、
}

ES08C{
	1、屏没有亮；
	2、录像失败；
}

改libavi.a全编720P{
	1、1
	2、0
	3、1
	4、1
	5、0
}

测试使用{
{
	1、0
	2、0
	3、0
	4、0
	5、0
}

{
	1、0
	2、0
	3、0
	4、0
	5、0
}

}

可能有问题的文件{
	3个
	mjpeg，
	mjpegb，
	record，
}

定位{
	测试record.c，record.h;5次，如果没有问题，是这两个文件引起，如果有问题，排除这两个文件；
	{
		1、0
		2、0
		3、0
		4、0
		5、0
	}
	没有问题，是由这两个文件引起；
	测试.h，没有问题，不是由.h引起的，有问题，是.h引起的；
	{
		1、0
		2、0
		3、0
		4、0
		5、0
	}
	没有问题，不是有.h引起的；
	测试record.c,没有问题，测试异常，有问题，确认是record.c,引起
	{
		1、0
		2、0
		3、0
		4、0
		5、1
	}
	有问题，确认是record.c引起的
	测试，不进行补帧操作，有问题，跟补帧没有关系，没有问题，是补帧引起的；
	{
		1、0
		2、0
		3、0
		4、0
		5、0
		6、0
		没有问题，是补帧引起的；
		验证，进行补帧操作，有问题，确认是补帧引起的，没有问题，测试异常；
		{
			1、1
			2、0
			3、0
			4、0
			5、0
		}
		{
			1、0
			2、1
			3、0
			4、1
			5、0
		}
		有问题，确认是补帧引起的，没有问题，测试异常；
		再次验证，不进行补帧操作10次，没有问题，补帧引起；
		{
			1、0
			2、0
			3、0
			4、0
			5、1
			6、
			7、
			8、
			9、
			10、
		}
		有问题，判断不是补帧引起的
		再次验证是否为record.c引起的，测试record.c，没有问题，是record.c引起的
		{
			1、0
			2、0
			3、0
			4、0
			5、0
			6、
			7、
			8、
			9、
			10、
		}
		没有问题：
		{
			0-1887，
			0-990，
		}
		测试0-990，有问题，0-990异常，没有问题，990-1887异常；
		{
			1、0
			2、0
			3、0
			4、0
			5、0
		}
		没有问题，998-1887异常；
		
		875-1265
		测试:875-1098;
		{
			1、0
			2、0
			3、0
			4、0
			5、0
		}
		没有问题，990-1887异常；
		测试1101-1121
		{
			1、0
			2、1
			3、
			4、
			5、
		}
		有问题
	}
}

确认是哪里优化的问题{
	现在怀疑只跟record.c有关，控制其他为没有问题的文件，看是否能正常；
	其他文件均没有改动，视频仍然异常，确认是record.c控制的；
	1027-1089，修改为没有问题的代码，确认1027-1089是否优化了时间长度异常；
	还是异常，没有优化；
	是否0-724优化的：是，正常了；
	是否0-83优化的：不是，仍然正常；
	是否83-748优化的：是，异常了；
	是否videoRecordStop优化的：不是，仍然异常；
	是否556-610优化的：是正常了；
	是否603-610优化的：不是仍然是正常的；
	是否是535优化的：是异常了；
	确认是hal_mjpB_framechain_en优化的；
}

MKL-ES09-LT修改点{
	1、添加录像缓存buf，优化写卡速度慢时，丢帧的问题；
	2、去掉写卡速度慢时，插帧的功能（会导致视频画面异常）；
	3、添加删除大量照片时，超过8s，电子狗复位的问题（删除时间每超过2s，喂一次狗）；
}

