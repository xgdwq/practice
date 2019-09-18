A=(a b c def)

#直接显示数组
echo ${A[@]}
echo ${A[*]}

#获取数组长度
len=${#A[@]}
echo $len
len=${#A[*]}
echo $len

#遍历数组
for itm in ${A[@]}; do
	echo $itm
done

#数学运算几种写法，以下2种均可
#index=$[$len-1]
((index=$len-1))
echo $index

#以下3种写法均可
for i in `seq 0 $index`; do
#or i in $(seq 0 $index); do
#for (( i=0; i<"$len"; i=i+1 )); do
	echo ${A[$i]}
done

#用while循环遍历
A[3]="wang"
i=0
while [ $i -lt $len ]
do
	echo ${A[$i]}
	let i++
done
