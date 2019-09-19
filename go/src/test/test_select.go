package main

import (
	"fmt"
	"time"
)

func Chann(ch chan int, stopCh chan bool) {
	var i int
	i = 10
	for j := 0; j < 10; j++ {
		ch <- i
		time.Sleep(time.Second)
	}
	stopCh <- true
}

func main() {

	ch := make(chan int)
	c := 0
	stopCh := make(chan bool)

	go Chann(ch, stopCh)

	//因为for是无限循环等待，因此不会主协程不会暴力结束Chann
	//select相当于监听了多个通道，有通道准备好数据且某个case可以执行时，便会执行相应的case路径
	//当多个case路径都可以执行时，比如此例子中ch通道准备好时，第1个和第2个case都可以执行，则随机选择
	for {
		select {
		case c = <-ch:
			fmt.Println("Recvice1", c)
			fmt.Println("channel")
		case s := <-ch:
			fmt.Println("Receive2", s)
		case _ = <-stopCh:
			goto end
		}
	}
end:
}
