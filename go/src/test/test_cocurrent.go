package main

import (
	"fmt"
	"time"
)

const NUM = 5

func Count(ch chan int, i int, r []int) {
	time.Sleep(time.Second * 3)
	r[i] = generateNum(i + 1)
	ch <- 1
}

func generateNum(i int) int {
	return i
}

func main() {
	t1 := time.Now()
	recv := make([]int, NUM)
	chs := make([]chan int, NUM)
	for i := 0; i < NUM; i++ {
		chs[i] = make(chan int)
		go Count(chs[i], i, recv)
		//Count(chs[i], i, recv)
	}
	//防止因并发进程异常导致某个chan一直阻塞，设置一个超时，超时程序主动退出
	go func(chs []chan int) {
		for {
			select {
			case <-time.After(2 * time.Second):
				fmt.Printf("timeout, exit!")
				for _, ch := range chs {
					ch <- 1
				}
				break
			}
		}
	}(chs)

	// 如验证串行调用耗时需要注释调chan相关
	for _, ch := range chs {
		<-ch
	}
	fmt.Printf("recv=[%v], cost=[%v]\n", recv, time.Now().Sub(t1))
}
