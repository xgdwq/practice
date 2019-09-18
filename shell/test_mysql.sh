sdate=`date  +%Y%m%d -d -1day`
edate=$sdate
#从mysql中筛选出线索数据
sql="select f_ip, f_area, f_create_time  as date, f_merchant_id, f_bussiness_info, f_ua  from t_order where to_days(f_create_time)>=to_days('${sdate}') and to_days(f_create_time)<=to_days('$edate') and f_order not like '000%'"
/home/work/.jumbo/bin/mysql -u root -N -D jiazhuang -e "$sql" > wq_charge_sql_res_${sdate}_$edate
#通过ip去映射地域
python iplibrary_wq.py -a 1,2,3,4  -f  wq_charge_sql_res_${sdate}_$edate  >  wq_charge_ip_res_${sdate}_$edate
#归一化数据到统计表结构: mysql -uroot  -h10.62.177.21 -Djiazhuang -P3306 -prootroot; table: t_service_clue
python get_final_format.py wq_charge_ip_res_${sdate}_$edate > insert_sql_data_${sdate}_$edate
#数据插入表
while read -r line
do
    value=`echo -e "$line" | awk -F '\t' '{printf "\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\", %d, %d, %d", $1,$2,$3,$4,$5,$6,$7,$8,$9}'`
    #echo "$value"
    /home/work/.jumbo/bin/mysql -uroot  -h10.62.177.21 -Djiazhuang -P3306 -prootroot -e "insert into t_service_clue(f_create_time, f_province, f_city, f_env, f_shop, f_provider, f_total, f_business, f_free) values($value)" 2>/dev/null 
done < insert_sql_data_${sdate}_$edate
