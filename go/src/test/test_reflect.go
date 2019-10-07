package main

import (
	"fmt"
	"reflect"
)

func main() {
	var x float64 = 3.4
	v := reflect.ValueOf(x)

	fmt.Println("type:", v.Type())
	fmt.Println("kind is float64:", v.Kind() == reflect.Float64)
	fmt.Println("value:", v.Float())
    /*
	type: float64
    kind is float64: true
    value: 3.4
	*/

	p := reflect.ValueOf(&x)
	v1 := p.Elem()
	v1.SetFloat(7.1)
	fmt.Println("value:", x)
}

