package main

import "fmt"

func main() {
	var s string = "王强 is a good boy!"
	var b []byte = []byte(s) //字符串所有的字节序列，如汉子可能有三个字节，英文字母一个字节
	var r []rune = []rune(s) //所有码点序列，即unicode值的序列，数量上和字面数量相等
	fmt.Println(s)           //王强 is a good boy!
	fmt.Println(len(s))      //21,即字节序列长度
	fmt.Println(s[0])        // 231,即第一个字节的值

	fmt.Println(b)      // [231 142 139 229 188 186 32 105 115 32 97 32 103 111 111 100 32 98 111 121 33]
	fmt.Println(len(b)) //21
	fmt.Println(b[0])   //231

	fmt.Println(r)            // [29579 24378 32 105 115 32 97 32 103 111 111 100 32 98 111 121 33]
	fmt.Println(len(r))       // 17
	fmt.Println(r[0])         // 29579
	fmt.Println(string(r[0])) // 王
}

/*
Go语言中字符串的字节使用UTF-8编码表示Unicode文本，因此Go语言字符串是变长字节序列，每一个字符都用一个或者多个字节表示，这跟其他的（C++，Java，Python 3）的字符串类型有着本质上的不同，后者为定长字节序列。

链接：https://www.jianshu.com/p/61dc40f5090d
*/
