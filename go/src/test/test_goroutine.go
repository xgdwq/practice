package main

import (
	"fmt"
	"time"
)

func DelayPrint() {
	for i := 1; i <= 4; i++ {
		time.Sleep(250 * time.Millisecond)
		fmt.Println(i)
	}
}

func HelloWorld() {
	fmt.Println("Hello world goroutine")
}

func main() {
	go DelayPrint() // 开启第一个goroutine
	go HelloWorld() // 开启第二个goroutine
	//因为主goroutin执行完会暴力结束所有协程，所以为了保证其他协程执行完毕，主协程中sleep的时间需要足够长
	time.Sleep(2 * time.Second)
	fmt.Println("main function")
}
