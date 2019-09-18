package main

import (
	"fmt"
	"myMath"
	"testPkg"
)

func main() {
	fmt.Println("hello Golang")
	fmt.Println(myMath.Add(1, 3))
	fmt.Println(myMath.Sub(1, 4))
	fmt.Println(myMath.Mul(2, 4))
	fmt.Println(testPkg.Aabbss(-19))
}
