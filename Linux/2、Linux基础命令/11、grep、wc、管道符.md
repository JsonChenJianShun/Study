# grep、wc、管道符

## grep 命令，从文件中通过关键字过滤文件行

grep [-n] 关键字 文件路径

选项-n，可选，表示在结果中显示关键字所在的行号

参数，关键字，必填，表示过滤的关键字，带有空格或其他特殊符号，建议使用""将关键字包围

参数，文件路径，必填，表示要过滤的文件的路径，可作为内容输入端口

## wc 命令统计数量

wc [-c -m -l -w] 文件路径

选项，-c，统计bytes（字节）数量

选项，-m，统计字符数量

选项，-l，统计行数

选项，-w，统计单词数量，

参数，文件路径，被统计的文件，可作为内容输入端口

## 管道符 |

cat itheima.txt | grep itheima

将左边命令的结果，作为右边命令的输入

