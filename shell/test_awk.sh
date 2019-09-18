#1, 将awk指令写入文件，通过-f来调用，FS即分隔符
#vim awkscript
#BEGIN {
#FS="#"
#}
#{print $1}
awk -f awkscript user.txt #通过调用awk指令文件来执行awk命令

#2, awk中使用正则匹配, 需要放到//中

awk -F "#"  '/zhang/{print $2}' user.txt  #以":"为分隔符打印1.txt中匹配123的那一行中，第二列的内容

#3, 打印user.txt中，第一列(部分)匹配ang的行其第二列的内容 ~表示匹配
awk  '$1 ~ /ang/{print $2}'  user.txt

#4, awk 中if语句两种写法:
awk -F "#" '{if($1=="zhang") print $2}' user.txt
awk -F "#" '$1 == "zhang"{print $2}' user.txt
awk -F "#" '$1 == "zhang" && NR > 1  {print NR}' user.txt
awk 'BEGIN {FS="#"} $1 == "zhang" {print $2}' user.txt

#几个变量总结
FS 分隔符
NF 当前行列数
$NF 由上推断，代表当前行最后一列内容
NR  当前行号

#一个小型例子
#!/bin/bash
num=`wc 1.txt | awk '{print $2}'`   # 统计1.txt文件有多少列, 可以理解为1.txt就1行
for i in `seq 1 $num`            # 根据文件列数进行循环
do
	 awk -v a=$i '{print $a}' 1.txt     # 打印每一列的内容，-v 参数可以指定一个变量保存外部变量的值，将外部变量传递给awk
 done
