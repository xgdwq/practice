######如何统计日志文件中客户端ip的访问频率###############################

方案1：分步完成
#参见：https://blog.csdn.net/qq_18831501/article/details/80208268

#摘取出特定时间的行，也可以用grep
cat access.log |sed -rn '/1\/Apr\/2018/p' > a.txt 
#统计a.txt里面有多少个ip访问
cat access.log |awk '{print $1}'|sort|uniq  > ipnum.txt
#通过shell统计每个ip访问次数
#即对每个ip执行grep然后wc统计
echo>result.txt #清空原文件
for i in `cat ipnum.txt`
do
    iptj=`cat  access.log |grep $i |grep -v 400|wc -l`
	echo "ip地址"$i"在2018-04-1日全天(24小时)累计成功请求"$iptj"次，平均每分钟>    请求次数为："$(($iptj/1440)) >> result.txt
done


方案2：核心点在 uniq -c 的功能
#参见：https://blog.csdn.net/jirryzhang/article/details/82467554

#通过cut或者awk取出ip，再使用uniq -c的统计功能，最后sort -nr逆序输出即可
cat bcproduceowapi.log | cut -d ' ' -f 12 | grep client |sort| uniq -c |sort -nr |awk '{if ($1>50) print $0}'

