批量改名：
for f in ./* ; do mv $f `echo $f | sed  's/32399/32900/'`; done

逐行取md5值并输出文件：
for i in `cat dd.txt`; do echo -n $i | md5sum | awk '{print $1":1"}'; done > md5.txt

	过滤出不含空格的行：
	cat 32900_0_1.dict.exact  | grep -v " " > test.txt

	排序并去重：
	sort test.txt |uniq > test2.txt

	取各文件的md5值
	for f in ./*; do md5sum $f > $f.md5; done

	cat sitemap.xml | grep common | awk -F '<loc>' '{print $2}' | awk -F '</loc>' '{print $1}'  | xargs wget
	复方氨酚烷胺片

	去掉重复行：
	sort -n brand.txt | awk '{if($0!=line)print; line=$0}'

	取同义词第一列
	cat ../hospital_synonym.txt | awk -F \\t '{print $1}' > tt.txt

	i=0;for hos in `cat hospital_name.txt`;do echo "$i:$hos" >> tt.txt;let i++;done

	awk '{if($1!=$2) {print $1"\t"$2}}' symptom_syn.txt > ddd

	awk -F : '{print $NF}' mongo_disease_data > mongo_disease_list
