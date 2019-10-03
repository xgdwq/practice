package main

import "fmt"

// 声明了一个函数类型(函数参数个数、参数类型、返回值个数与类型共同决定了一个函数类型)
type testInt func(int) bool // 声明了一个函数类型(函数参数个数、参数类型、返回值个数与类型共同决定了一个函数类型)

// 过滤出奇数
func isOdd(integer int) bool {
	if integer%2 == 0 {
		return false
	}
	return true
}
//过滤出偶数
func isEven(integer int) bool {
	if integer%2 == 0 {
		return true
	}
	return false
}

// 声明的函数类型在这个地方当做了一个参数（f)
func filter(slice []int, f testInt) []int {
	//var result []int
	result := make([]int, 0)
	for _, value := range slice { //和上面的声明方式一样
		if f(value) {
			result = append(result, value)
		}
	}
	return result
}

func main(){
	slice := []int {1, 2, 3, 4, 5, 7}
	fmt.Println("slice = ", slice)
	odd := filter(slice, isOdd)    // 函数当做值来传递了
	fmt.Println("Odd elements of slice are: ", odd)
	even := filter(slice, isEven)  // 函数当做值来传递了
	fmt.Println("Even elements of slice are: ", even)
}
