// eg5. 使用break终止select语句的执行
package main

import "fmt"

func main() {

	var ch = make(chan int, 1)

	ch <- 1

	select {

	case <-ch:

		fmt.Println("This case is selected.")

		break //The following statement in this case will not execute.

		fmt.Println("After break statement")

	default:

		fmt.Println("This is the default case.")

	}

	fmt.Println("After select statement.")

}
