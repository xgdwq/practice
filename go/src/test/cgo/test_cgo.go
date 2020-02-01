package main

// #include <stdio.h>
// #include <stdlib.h>
// char *foo = "wangqiang";
/*
void print(char *str) {
    printf("%s\n", str);
}

int add (int a, int b) {
	return a + b;
}
*/
import "C"
import (
	"fmt"
	"unsafe"
)

func main() {
	s := "Hello Cgo"
	cs := C.CString(s)
	C.print(cs)
	fmt.Println(C.add(1, 2))
	fmt.Println(C.GoString(C.foo))
	C.free(unsafe.Pointer(cs))
}
