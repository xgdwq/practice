package main

import "fmt"

const MAX int = 3

func main() {
	a := []int{10, 100, 200}
	var i int
	var ptr [MAX]*int

	for i = 0; i < MAX; i++ {
		ptr[i] = &a[i] /* 整数地址赋值给指针数组, 因为64位架构，故一个整形占据8个字节*/
	}

	for i = 0; i < MAX; i++ {
		fmt.Printf("a[%d] = %d, %x\n", i, *ptr[i], ptr[i])
	}
}
