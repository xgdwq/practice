package main

import "fmt"

func main() {
	for i := 0; i < 5; i++ {
		//在defer后指定的函数会在函数退出前调用
		//该程序执行结束前，会依次打印4，3，2，1，0 (多个defer后进先出)
		defer fmt.Printf("%d\n", i)
	}
}
