# which、find命令

## which 命令查找程序存放地址

which 要查找的命令

## find 命令按文件名查找文件、文件夹

find 起始路径 -name "被查找的文件名"

## 通配符 *

test*，表示匹配任何以test开头的内容

*test，表示匹配任何以test结尾的内容

*test*，表示匹配任何包含test的内容

可结合find做文件的模糊查询

## find 命令按文件大小查找文件，不查找文件夹

find 起始路径 -size +|-n[KMG]

+、-表示大于和小于

n表示大小数字

KMG表示大小单位

