package main

import "fmt"

func main() {

	var b int = 10
	var a int

	numbers := [6]int{1, 2, 3, 5}
	a = 3

	//* for 循环*/ 注意 for循环 a:=0 与 a=0的区别
	for a := 0; a < 6; a++ {
		fmt.Printf("a 的值为: %d\n", a)
	}

	fmt.Printf("###a 的值为####: %d\n", a)

	for a < b {
		a++
		fmt.Printf("a 的值为: %d\n", a)
	}

	for i, x := range numbers {
		fmt.Printf("第 %d 位x的值 = %d\n", i, x)
	}
}
