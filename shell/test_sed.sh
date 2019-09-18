#############基本操作###############
#查找命令n和p:，打印（p)含有h的行中，第2到3行之间行(n)
cat uer.txt | grep h |sed -n '2,3p'

#删除命令d:打印（p)含有h的行中，删除第2到3行之间行(n)
cat uer.txt | grep h |sed  '2,3d'

#添加命令a:在user.txt中查询出带h的行；并在第二行后面添加新的一行数据
cat user.txt | grep h |sed '2a5\thuang\tG\t40'

#插入命令i: 在grep结果的第二行前插入数据
cat user.txt | grep h |sed '2i hello\nword'

#整行替换命令c: 将grep结果的第2行替换为命令中的内容
cat user.txt | grep h |sed '2c 10\twanghua\tN\t90'

#字符串替换命令s，格式：“行范围s/旧字串/新字串/g”,如下行范围是全部行
cat user.txt | grep h |sed '1,$s/ng/yy/g'

#替换并写入文件：-i
#把文件中第2到3行数据中的ng替换成yy 并写入到user.txt
sed -i '1,$s/ng/yy/g' user.txt

#多行替换：-e: -e允许多条命令顺序执行，用分号隔开，s前面不加数字表示所有行
sed -e 's/wang/zhang/g ; s/qiang/liang/g' user.txt

#单字符替换命令y: sed y/123/789 data #data中的1替换成7，2替换成8，3替换成9
# sed '1,4y/123/456' user.txt;y前面不加数字代表全部行即 sed '1,$y/123/456' user.txt
sed 'y/123/789/' user.txt

#将文件内容插入数据流命令r：以下命令代表将test.txt中内容插入到usr.txt中的第三行后
sed '3r test.txt' user.txt

#s/old/new/将每行的第一个old替换为new;
#s/old/new/3将每行的第三个old替换为new
#s/old/new/g 将所有的old替换为new

#note: 除了-i,以上命令均不会改变源文件


##################更多删除操作###########################

sed ‘/xml/d’ a.txt删除所有包含xml的行
sed ‘/xml/!d’ a.txt 删除所有不包含xml的行
sed '/^install/d' a.txt 删除所有以install开头的行
sed '/install$/d' a.txt 删除所有以install结尾的行
sed -r  '/^zh(.*)19$/d' user.txt 删除以zh开头且以19结尾的行 -r 开启了正则模式
sed '$d' a.txt删除最后一行
sed '/^$/d' a.txt删除所有空行

###################更多命令和应用场景##############

https://cloud.tencent.com/developer/news/303372
