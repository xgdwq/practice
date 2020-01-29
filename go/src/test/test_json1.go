//参考:https://blog.csdn.net/zxy_666/article/details/80173288
package main

import (
	"encoding/json"
	"fmt"
)

type StuRead struct {
	Name interface{} `json:"name"`
	Age  interface{}
	sex  interface{}
	//Class interface{} `json:"class"`
	Class *Class `json:"class"`
	Test  interface{}
}

type Class struct {
	Name  string
	Grade int
}

func main() {
	//json字符中的"引号，需用\进行转义，否则编译出错
	//json字符串沿用上面的结果，但对key进行了大小的修改，并添加了sex数据
	data := "{\"name\":\"张三\",\"Age\":18,\"sex\":\"男\",\"CLASS\":{\"naME\":\"1班\",\"GradE\":3}}"
	data1 := "{\"name\":\"张三\",\"Age\":18,\"sex\":\"男\",\"Class\":{\"Name\":\"1班\",\"Grade\":3}}"

	str := []byte(data)
	str1 := []byte(data1)
	//1.Unmarshal的第一个参数是json字符串，第二个参数是接受json解析的数据结构。
	//第二个参数必须是指针，否则无法接收解析的数据，如stu仍为空对象StuRead{}
	//2.可以直接stu:=new(StuRead),此时的stu自身就是指针
	stu := StuRead{}
	stu1 := new(StuRead)
	err := json.Unmarshal(str, &stu)
	err1 := json.Unmarshal(str1, stu1)
	//解析失败会报错，如json字符串格式不对，缺"号，缺}等。
	if err != nil {
		fmt.Println(err)
	}
	if err1 != nil {
		fmt.Println(err1)
	}

	fmt.Println(stu)
	fmt.Println((*stu1))
	fmt.Println(stu1.Class.Name)
}
