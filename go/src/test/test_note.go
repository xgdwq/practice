package main

import (
	"fmt"
)

func main() {
	c := new([]int)
	// 由new创建，此时c为指针，下面不能直接用c
	fmt.Println(len(*c), cap(*c)) // 0 0
	*c = append(*c, 1)
	fmt.Println(len(*c), cap(*c)) // 1 1

	s := "wang " + // 连接符需要在上一行，否则编译错误
		"qiang"
	fmt.Println(s)
}
