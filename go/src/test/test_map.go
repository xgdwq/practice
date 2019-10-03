package main

import "fmt"

func main() {
	var countryCapitalMap map[string]string /*创建集合 */
	fmt.Printf("map 零值为: %v\n", countryCapitalMap)
	countryCapitalMap = make(map[string]string) //make 返回了初始化后的（非零值）
	fmt.Printf("获取map的类型: %T\n", countryCapitalMap)

	/* map插入key - value对,各个国家对应的首都 */
	countryCapitalMap["France"] = "巴黎"
	countryCapitalMap["Italy"] = "罗马"
	countryCapitalMap["Japan"] = "东京"
	countryCapitalMap["India "] = "新德里"
	//另一种初始化方法
	//countryCapitalMap2 := map[string]string{"France": "Paris", "Italy": "Rome", "Japan": "Tokyo", "India": "New delhi"}

	/*使用键输出地图值 */
	for country := range countryCapitalMap {
		fmt.Println(country, "首都是", countryCapitalMap[country])
	}

	/*查看元素在集合中是否存在 */
	capital, ok := countryCapitalMap["American"] /*如果确定是真实的,则存在,否则不存在 */
	fmt.Printf("first ret: %v, type is: %T\n", capital, capital) //capital=="" 
	fmt.Printf("second ret: %v, type is: %T\n", ok, ok) //ok==false
	if ok {
		fmt.Println("American 的首都是", capital)
	} else {
		fmt.Println("American 的首都不存在")
	}
	// 遍历数组, 因为不关心下标，因此用_（下划线）代替
	for _, country := range []string{"France", "China"} {
		//判断map中是否存在key的简便（常用）写法，一般多用与循环遍历判断中
		if value, ok := countryCapitalMap[country]; ok { 
			fmt.Printf("key: %s 存在，其value为: %s\n", country, value)
		} else {
			fmt.Printf("key: China 不存在\n")
		}
	}
	//删除指定key的元素
	delete(countryCapitalMap, "France")
	_, ok = countryCapitalMap["France"]
	fmt.Println(ok)


}
