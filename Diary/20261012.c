JSON{
	ctrl + E:打开/关闭远控；
	git rm -r --cached//删除已commit的文件；
	
//JSON---------------------start:
//JSON---------------------end:
	
deg_Printf("JSON: line: %d, func: %s\n",__LINE__,__FUNCTION__);
}

待做{
	
}

独白{
	有什么方向吗
	两个打印，一帧的数据；
	休息休息，okok，good good，
	需要核实一下固件；
	不要慌张，有点问题是正常的，多去检查，能减少问题；
	relax relax relax, good good good, well well well beatiful beatiful,
	饿了 饿了 饿了，慢慢来 慢慢来，别着急，会好的，
}
	
提测流程{
	1、修改需求；
	2、关闭串口打印；
	3、发送SDK压缩包，拿到svn编号；
	4、命名固件，发送邮件给测试；
}

周报流程{
	1、填写周报；
	2、发邮件给庞建文，抄送给蒋勇和李满华（project），注意，需要抄送给project账号；
}

发邮件流程{
	1、确认修改点是否添加；
	2、确认压缩包大小是否正常；
}



项目注意事项{
	固件、SDK命名：主控型号+项目名+版本号+SVN号+日期；
	测试通过，才算结束；
	改动需要发邮件回复；
}

需要添加的东西{
	1、垃圾桶；
	2、扩展坞；
	3、type C充电口；
}

生成字符串的步骤{
	1、修改font.lsx;
	2、使用excel_to_txt.exe将exel分解成多个txt文件；
	3、如果有新增行，对比修改font.tab，这是excel的第一列；
	4、如果有新增列，对比修改font.ini，这是excel的第一行；
	5、运行resource/font/fontSrc.bat，生成fontSrc.txt；
	6、运行resource/font/font_build.exe,选择字符文件fontSrc.txt ,生成resource/font/font.bin；
	7、运行resource/font/maxRes.bat，生成\resTable\resfont.bin, \resTable\resfontidx.bin, user_str.c, user_str.h；
	8、运行resource/GenRes.bat，生成RES.bin ,RES.h；
}

生成图标的步骤{
	1、修改icon的图标；
	2、运行resource/icon/OSDEdit.exe，生成OSD_source.tmp；
	3、运行resource/icon/maxRes.bat，生成\resTable\OSD_source.bin，\restable\palette.bin，user_icon.c，user_icon.h，r_palette.h；
	4、运行resource/GenRes.bat，生成RES.bin ,RES.h；
}

打印相机{
	1、怎么实现的打印功能，是否用一些通用的协议；
	2、如何实现的切换摄像头；
	3、回放如何实现的打印；
}

如何实现的打印功能{
	通过打印头和打印电机的配合完成，需要两个外设；
	打印头：串行移位寄存器协议；
	打印电机：并行电平控制；
	打印头接口：J10 PT48DS-B 24PIN
	送纸电机：U4 HR8833
}

串行移位寄存器协议{
	串行移位：clock + DI;
	锁存：LATCH，将一行移位寄存器数据传输给锁存寄存器数据；
	使能加热：STB，加热需要显示的数据；
	同步：TM，配合走纸和加热；
}

M4D-LT客户需求{
改开关机LOGO图片，开机和关机都要同一张图片， WADEO品牌的LOGO。
更新版本号为当天日期
SDK见附件。
由于没找到样机，可以先出一版。
可以尝试用工具修改logo，没有问题的话，把工具一起发给客户，后续客户自己用工具换logo。（工具问维龙要）

	1、修改开关机logo；
	2、修改版本号；
}

M4D-LT优化点{
	1、优化sdk，可直接修改版本号；
	2、优化开关机画面；
}

数字{
	1 000千
	1 000 000百万
	1 000 000 000十亿
}

Y200-DV04-LT{
	1、Y200-DV04-LT-米妮-中文-7789V-20A6-0A39-双摄0A39或双摄20A6-V1.6-20260605(1)，
		Y200-DV04-LT-SVN3778_朱迪-中文-7789V-20A6-0A39-双摄0A39或双摄20A6-V1.7-20260804(1)，
		这两个个固件能按键开机，但是开机就关机；
	2、Y200-DV04-LT_SVN4975_20260924，这个SDK能开机，但是power键和adkey都没有作用；
	3、3030B是那个屏，等待寄过来；
	4、BOE+7789的屏是亮的，其他屏不亮；
	
	1、对于两个固件开机就关机的问题，可以回溯svn版本号，确定具体原因；
	2、对于sdk开机，按键没有作用，可以申请硬件支持，确定power键和adkey阻值；
	3、屏可以确认那是是3030B；
}

{
	新的主板是一样的问题，Y200-DV04-LT-米妮-中文-7789V-20A6-0A39-双摄0A39或双摄20A6-V1.6-20260605(1)，
	看看有没有6月5好版本的SDK，这个固件，power键是有作用的，但是开机会自动关机，不行的话只能让硬件支持下了；
}

{
	米妮：粉色；
	米奇：蓝色；
	朱迪：动漫；
	
	65-71
	7，
	4 -
	36，
}

{
	先换屏，或者先换主题，
	都需要屏，需要先点亮；
	
	屏已点亮；
	
	1、原sdk有3030b的屏，已经点亮；
	2、RES_FRAME_PUZZLE有7个，RES_FRAME有19个；
	
	庞工，这个diy下的特效画板，有没有公版默认的。我看sdk的puzzle都是小马宝莉的
}

提测{
	提测：
	1、使用朱迪主题；
	2、使用3030b屏驱动；
	3、先提测一个主题，后续出剩余三个主题；
}

不同版本不同主题{
	SVN5108，米妮
	SVN5109，米奇，
	SVN5111，草莓熊，
}

项目问题{
	项目很急，当天完成；
	交接模糊，可能需要电池开机，才能操作按键；
}






