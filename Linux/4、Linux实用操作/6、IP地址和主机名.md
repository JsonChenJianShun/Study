## IP地址

每台联网的电脑都会有一个地址，用于和其他计算机通讯

IPv4版本格式是：a.b.c.d,其中abcd表示0~255的数字

可以通过ifconfig，查看本机的ip地址，如果无法使用ifconfig命令。可以安装：

````C
yum -y install net-tools
````

127.0.0.1,这个IP地址用于代指本机

0.0.0.0

- 可以用来指代本机
- 可以在端口绑定中用来确定绑定关系
- 在一些IP地址限制中，表示所有IP的意思，如放行规则为0.0.0.0，表示允许任意IP访问

## 主机名

- 使用hostname查看主机名
- 使用hostnamectl set-hostname 主机名，修改主机名

## 域名解析

**IP地址与域名相对应**

- 先查看本机的记录（私人记录本）
  - Windows看：C\Windows\System32\driver\etc\hosts
  - Linux看：/etc/hosts
- 再联网去DNS服务器（如114.114.114.114,8.8.8.8等）询问

