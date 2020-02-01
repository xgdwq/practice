package main

import (
	"fmt"
	"sync"
	"time"
)

var mut sync.Mutex

func printer(str string) {
	mut.Lock()
	defer mut.Unlock()
	for _, data := range str {
		fmt.Printf("%c", data)
	}
	fmt.Println()
}
func person1() {
	printer("hello")
}
func person2() {
	printer("world")
}
func main() {
	go person1()
	person2()
	time.Sleep(time.Second)
}

//输出结果（不加锁）
//worhello
//ld

//输出结果（加锁）
//world
//hello

/*
————————————————
版权声明：本文为CSDN博主「Delato」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_42927934/article/details/82533940
*/

/*
————————————————
版权声明：本文为CSDN博主「Delato」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_42927934/article/details/82533940
*/
