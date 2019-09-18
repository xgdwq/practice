package main

import "fmt"

func main() {
	const (
		a = iota //0
		b        //1
		c        //2
		d = "ha" //¶ÀÁ¢Öµ£¬iota += 1
		e        //"ha"   iota += 1
		f = 100  //iota +=1
		g        //100  iota +=1
		h = iota //7,»Ö¸´¼ÆÊý
		i        //8
	)
	const (
		p = 1 << iota
		q = 3 << iota
		r
		s
	)
	fmt.Println(a, b, c, d, e, f, g, h, i)
	fmt.Println(p, q, r, s)
}
