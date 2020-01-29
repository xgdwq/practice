//参考: https://blog.csdn.net/zxy_666/article/details/80173288
package main

import (
	"encoding/json"
	"fmt"
)

type Student struct {
	Name   string `json:"name"`
	Age    int
	sex    string
	Class  *Class `json:"class"`
	IsGood bool
}

type Class struct {
	Name  string
	Grade int
}

func main() {
	//实例化一个数据结构，用于生成json字符串
	stu := Student{
		Name: "Raily",
		Age:  18,
		sex:  "女",
	}
	//cla := new(Class)
	//cla.Name = "1班"
	//cla.Grade = 3
	cla := Class{
		Name:  "1班",
		Grade: 3,
	}

	//指针变量
	stu.Class = &cla

	jsonStu, err := json.Marshal(stu)
	if err != nil {
		return
	}
	//jsonStu是[]byte类型，转化成string类型便于查看
	fmt.Println(jsonStu)
	fmt.Println(string(jsonStu))
}
