//eg4.如果有多个case同时可以运行，go会随机选择一个case执行

package main

import "fmt"

func main() {

	chanCap := 5

	ch := make(chan int, chanCap) //创建channel，容量为5

	for i := 0; i < chanCap; i++ { //通过for循环，向channel里填满数据

		select {
		//通过select随机的向channel里追加数据
		//因为ch是具有缓存容量的通道，所以容量小于chanCap时，写入数据不会阻塞
		//故下面三条case路径都是可以执行的，具体执行哪个，go是随机的

		case ch <- 1:
			fmt.Println("execute case 1")

		case ch <- 2:
			fmt.Println("execute case 2")

		case ch <- 3:
			fmt.Println("execute case 3")

		}

	}

	// 通过打印通道值验证写入的随机性(也可以多次执行程序，输出应该是不同的)
	for i := 0; i < chanCap; i++ {

		fmt.Printf("%v\n", <-ch)

	}

}
