package main

import "fmt"

type Books struct {
	title   string
	author  string
	subject string
	book_id int
}

func main() {
	var Book1 Books /* 声明 Book1 为 Books 类型 */
	var Book2 Books /* 声明 Book2 为 Books 类型 */

	//结构体初始化方式1
	Book1.title = "Go 语言"
	Book1.author = "www.runoob.com"
	Book1.subject = "Go 语言教程"
	Book1.book_id = 6495407
	//结构体初始化方式2
	Book1 = Books{"t1", "a1", "s1", 1}

	/* book 2 描述 */
	Book2.title = "Python 教程"
	Book2.author = "www.runoob.com"
	Book2.subject = "Python 语言教程"
	Book2.book_id = 6495700
	//结构体初始化方式3
	Book2 = Books{title: "t2", author: "a2", subject: "s2", book_id: 2}
	fmt.Printf("type of Book2: %T\n", Book2) //type of Book2: main.Books
	//以下两种均可，因为Go知道方法接收者（receiver）是指针，自动帮转了
	Book2.setTitle("t22")
	(&Book2).setTitle("t22")

	/* 打印 Book1 信息 */
	fmt.Printf("Book 1 title : %s\n", Book1.title)
	fmt.Printf("Book 1 author : %s\n", Book1.author)
	fmt.Printf("Book 1 subject : %s\n", Book1.subject)
	fmt.Printf("Book 1 book_id : %d\n", Book1.book_id)

	/* 打印 Book2 信息 */
	printBook(Book2)

	//结构体初始化方式4
	B := new(Books)
	fmt.Printf("type of B: %T\n", B) //type of B: *main.Books
	B.setTitle("tB")
	//B是一个指针
	printBook(*B)
}

// 如果不声明形参为指针类型，则无法改变原结构体的字段值
func (book *Books) setTitle(t string) string {
	//以下两种均可，因为Go知道方法接收者（receiver）是指针，自动帮转了
	(*book).title = t
	book.title = t
	return book.title
}

func printBook(Book2 Books) {
	fmt.Printf("Book 2 title : %s\n", Book2.title)
	fmt.Printf("Book 2 author : %s\n", Book2.author)
	fmt.Printf("Book 2 subject : %s\n", Book2.subject)
	fmt.Printf("Book 2 book_id : %d\n", Book2.book_id)
}
