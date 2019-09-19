//eg. select语句会一直等待，直到某个case里的IO操作可以进行

package main

import (
	"fmt"
	"time"
)

func fun1(ch chan int) {

	time.Sleep(time.Second * 2)

	ch <- 1

}

func fun2(ch chan int) {

	time.Sleep(time.Second * 4)

	ch <- 1

}

func main() {

	var ch1 = make(chan int)

	var ch2 = make(chan int)

	go fun1(ch1)

	go fun2(ch2)
	//可以理解监听也是一种阻塞吧
	select {

	case <-ch1:
		//因为func1sleep时间较少，率先准备好数据，故本例执行该路径
		fmt.Println("The first case is selected.")

	case <-ch2:

		fmt.Println("The second case is selected.")

	}

}
