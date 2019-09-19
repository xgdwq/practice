//eg3.与示例2不同，使用非空值channel(声明是指定了缓存容量)进行验证
//所有跟在case关键字右边的发送语句或接收语句中的通道表达式和元素表达式都会先被求值。无论它们所在的case是否有可能被选择都会这样。
//求值顺序：自上而下、从左到右

//定义几个变量，其中chs和numbers分别代表通道列表和整数列表
package main

import "fmt"

//此处与示例2不同，使用了缓存通道，这样不存在单向阻塞
var ch1 chan int = make(chan int, 1)

var ch2 chan int = make(chan int, 1)

var chs = []chan int{ch1, ch2}

var numbers = []int{1, 2, 3, 4, 5}

func main() {

	select {
	//与示例2不同，本例使用非空值channel进行IO操作，可以成功，因此执行了第1个case路径
	//同理，可以通过getChan与getNumber函数中的打印，可以验证case右边表达式的执行以及顺序
	//通过输出结果，可以知道执行顺序为0-2-1-3(即从上到下、从左到右)
	case getChan(0) <- getNumber(2):

		fmt.Println("1th case is selected.")

	case getChan(1) <- getNumber(3):

		fmt.Println("2th case is selected.")

	default:

		fmt.Println("default!.")

	}

}

func getNumber(i int) int {

	fmt.Printf("numbers[%d]\n", i)

	return numbers[i]

}

func getChan(i int) chan int {

	fmt.Printf("chs[%d]\n", i)

	return chs[i]

}
