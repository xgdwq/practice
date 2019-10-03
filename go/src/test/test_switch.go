package main

import "fmt"

func main() {
	i := 6

	//Go里面switch默认相当于每个case最后带有break，匹配成功后不会自动向下执行其他case，而是跳出整个switch,
	//但是可以使用fallthrough强制执行后面的case代码
	switch i {
	case 4:
		fmt.Println("less than 4")
		fallthrough
	case 5:
		fmt.Println("less than 5")
		fallthrough
	case 6:
		fmt.Println("less than 6")
		fallthrough
	case 7:
		fmt.Println("less than 7")
		fallthrough
	default:
		fmt.Println("decault case")
	}
}
