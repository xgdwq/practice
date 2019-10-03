package main

import "fmt"

type Human struct {
	name string
	age int
	phone string
}

type Student struct {
	Human //匿名字段
	school string
}

type Employee struct {
	Human //匿名字段
	company string
}

//如果一个method的receiver是*T,你可以在一个T类型的实例变量V上面调用这个method，而不需要&V去调用这个method
//如果一个method的receiver是T，你可以在一个*T类型的变量P上面调用这个method，而不需要 *P去调用这个method

//Human定义method
func (h *Human) SayHi() {
	fmt.Printf("Hi, I am %s you can call me on %s\n", h.name, h.phone)
}

//Employee的method重写Human的method
func (e *Employee) SayHi() {
	fmt.Printf("Hi, I am %s, I work at %s. Call me on %s\n", e.name,
		e.company, e.phone) //Yes you can split into 2 lines here.
}

func main() {
	mark := Student{Human{"Mark", 25, "222-222-YYYY"}, "MIT"}
	sam := Employee{Human{"Sam", 45, "111-888-XXXX"}, "Golang Inc"}

	//Human的method继承
	mark.SayHi()
	//Human的method重写
	sam.SayHi()
}
