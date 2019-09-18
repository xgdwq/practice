package main

import (
	"fmt"
	//"time"
)

var done chan bool

func HelloWorld() {
	fmt.Println("Hello world goroutine")
	//time.Sleep(1 * time.Second) //因为通道阻塞，可以不加sleep
	done <- true
}
func main() {
	done = make(chan bool) // 创建一个channel
	go HelloWorld()
	//HelloWorld()
	<-done
	//time.Sleep(1 * time.Second)
}
