package main

import (
	"io"
	"log"
	"net/http"
)

func handlerHello(w http.ResponseWriter, r *http.Request) {
	io.WriteString(w, "hello world\n")
}

func main() {
	http.HandleFunc("/hello", handlerHello) // 注册
	err := http.ListenAndServe("192.168.236.102:8888", nil)
	if err != nil {
		log.Println(err)
	}
}

//usage: 1) go run  test_http.go 2)浏览器输入: http://192.168.236.102:8888/hello
//
