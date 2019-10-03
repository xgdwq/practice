package main

import "fmt"

var c complex64 = 5 + 6i

func main() {
	c1 := 7 + 8i
	fmt.Printf("c is %v\n", c)
	fmt.Printf("c1 is %v\n", c1)
}
