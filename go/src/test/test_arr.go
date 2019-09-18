package main

import "fmt"

func main() {
	// 几种初始化方法
	//var arr [3] int; arr = [3]int{0,1,2}
	//var arr = [3]int{0,1,2}
	arr1 := [3]int{1, 2, 3}
	size := len(arr1)
	for i := 0; i < size; i++ {
		fmt.Println(arr1[i])
	}
	//需要和函数形参类型一致,此时为定义了长度的数组
	handleArr1(&arr1)
	//此时函数中修改参数数组，但函数外的数组并未改变
	for i := 0; i < size; i++ {
		fmt.Println(arr1[i])
	}
	//arr := [...]int{2, 3, 4}
	arr2 := []int{3, 4, 5}
	for i := 0; i < size; i++ {
		fmt.Println(arr2[i])
	}
	//需要和函数形参类型一致,此时为未定义长度的数组
	handleArr2(arr2)
	//此时函数中修改参数数组，但函数外的数组却改变(因为此时为一个切片，切片按引用传递)
	for i := 0; i < size; i++ {
		fmt.Println(arr2[i])
	}
}

func handleArr1(arr *[3]int) {
	arr[0] = 9
	fmt.Println(len(arr))
}

func handleArr2(arr []int) {
	arr[0] = 8
	fmt.Println(len(arr))
}
