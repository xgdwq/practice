package main

import "fmt"

type cb func(int) int

func main() {
	testCallBack(1, callBack)
	testCallBack(2, func(x int) int {
		fmt.Printf("我是回调222，x：%d\n", x)
		return x
	})
}

func testCallBack(x int, f cb) {
	fmt.Println(f(x))
}

func callBack(x int) int {
	fmt.Printf("我是回调，x：%d\n", x)
	return x
}
