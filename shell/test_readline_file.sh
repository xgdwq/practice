
#-r选项保证读入的内容是原始的内容，意味着反斜杠转义的行为不会发生
while read -r line
do
	#判断是否空串 
	#-n "$line" 成立，不为空;注意不能写成 -n $line
	if [ -n "$line" ]; then
		echo $line
	fi

	#-z "$line" 成立，为空; 不能写成 -z $line
	if [ -z "$line" ]; then
		continue
	fi
done < ./user.txt

#因为for循环会以空格分割读入的数据, 如果文件有多列，会被拆开，不符合预期
#for line1 in $(cat user.txt)
for line1 in `cat user.txt`
do
	echo ${line1}
done

#继续改进for循环

f=./user.txt
#获取行数
count=`cat $f | wc -l`

for i in `seq 1 $count`; do
	#意思是前i行的最后一行，也就是当前行
	cat $f | head -n $i | tail -n 1
	sleep 1
done

