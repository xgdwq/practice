package main

import . "fmt"

var m = map[int]string{1: "w", 2: "q"}

func main() {
	a := m[2]
	m[2] = "r"
	b := m[2]
	k, v := m[2]
	k1, v1 := m[3]
	//fmt.Println(a, b, m, k, v, k1, v1)
	Println(a, b, m, k, v, k1, v1)

	i := 4
	j := i
	Println(&i, &j)
	println(i, j)
}
