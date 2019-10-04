package main

import "fmt"

type Skills []string

type Human struct {
	name string
	age int
	weight int
	speciality string 
}

type Student struct {
	Human  // 匿名字段，struct
	Skills // 匿名字段，自定义的类型string slice
	int    // 内置类型作为匿名字段
	speciality string //和Human具有相同字段
}

func main() {
	// 初始化学生Jane
	jane := Student{Human:Human{"Jane", 35, 100, "math"}, speciality:"Biology"}
	// 现在我们来访问相应的字段
	fmt.Println("Her name is ", jane.name)
	fmt.Println("Her age is ", jane.age)
	fmt.Println("Her weight is ", jane.weight)
	fmt.Println("Her int is ", jane.int) // 默认int匿名字段的零值
	fmt.Println("Her speciality is ", jane.speciality) //此时为外层字段,输出"Biology"
	fmt.Println("Her Human.speciality is ", jane.Human.speciality) //此时为内层human字段,输出"math"
	//直接修改匿名字段human
	jane.Human = Human{"Jane", 35, 100, "English"}
	fmt.Println("Her Human.speciality is ", jane.Human.speciality) //此时为内层human字段,输出"math"
	// 我们来修改他的skill技能字段
	jane.Skills = []string{"anatomy"}
	fmt.Println("Her skills are ", jane.Skills)
	fmt.Println("She acquired two new ones ")
	jane.Skills = append(jane.Skills, "physics", "golang")
	fmt.Println("Her skills now are ", jane.Skills)
	// 修改匿名内置类型字段
	jane.int = 3
	fmt.Println("Her preferred number is", jane.int)
}