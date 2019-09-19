package main

import "fmt"

func main() {
	ch1 := make(chan int, 1)
	ch2 := make(chan int, 1)
	//若注释掉下面的语句，本例将执行select的default路径
	ch1 <- 1
	select {
	case e1 := <-ch1:
		//如果ch1通道成功读取数据，则执行该case处理语句
		//本例将执行该路径
		fmt.Printf("1th case is selected. e1=%v\n", e1)
	case e2 := <-ch2:
		//如果ch2通道成功读取数据，则执行该case处理语句
		fmt.Printf("2th case is selected. e2=%v\n", e2)
	default:
		//如果上面case都没有成功，则进入default处理流程
		fmt.Println("default!.\n")
	}
}
