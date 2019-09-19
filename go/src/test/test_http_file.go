package main

import (
	"fmt"
	"net/http"
)

func main() {
	fmt.Println("hello。。。。")

	http.Handle("/", http.FileServer(http.Dir("../../../../../../ftp/")))
	http.ListenAndServe(":8899", nil)
}

//usage: 1) go run  test_http_file.go as a demon  2)浏览器输入: http://192.168.236.102:8899
//3) 浏览器即可列出预置根目录（eg. ../../../../../../ftp/）中的文件列表
