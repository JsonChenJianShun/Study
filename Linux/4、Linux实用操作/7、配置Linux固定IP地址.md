## 固定IP地址

使用vim 编辑/etc/sysconfig/network-scripts/ifcfg-enp0s3

````C
vim /etc/sysconfig/network-scripts/ifcfg-enp0s3
````

编辑如下

````C
BOOTPROTO="static"        //将dhcp改为static
IPADDR="192.168.88.130"    //添加以下行
NETMASK="255.255.255.0"
GATEWAY="192.168.88.2"
DNS1="192.168.88.2"
````