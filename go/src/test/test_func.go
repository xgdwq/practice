package main

import "fmt"

func main() {
	a := 100
	b := 200
	fmt.Printf("a is : %d, b is : %d\n", a, b)

	fmt.Printf("swap a and b\n")
	// 没有新变量, 赋值（=）即可，不用声明（:=）
	a, b = mySwap(a, b)
	fmt.Printf("a is : %d, b is : %d\n", a, b)

	fmt.Printf("swap a and b\n")
	// 引用传递
	mySwap2(&a, &b)
	fmt.Printf("a is : %d, b is : %d\n", a, b)

	ret := myMax(a, b)
	fmt.Printf("max is : %d\n", ret)

	x, y, z := test3rets()
	fmt.Printf("x, y z: %d, %d, %d\n", x, y, z)
}

func myMax(num1, num2 int) int {

	if num1 > num2 {
		return num1
	}
	return num2
}

func mySwap(num1, num2 int) (int, int) {

	return num2, num1
}

func mySwap2(x, y *int) {
	*x, *y = *y, *x
}
func test3rets() (int, int, int) {
	return 1, 2, 3
}
