package main

import "fmt"

func main() {
	/* 创建切片 */
	numbers := []int{0, 1, 2, 3, 4, 5, 6, 7, 8}
	printSlice(numbers)

	/* 打印原始切片 */
	fmt.Println("numbers ==", numbers)

	/* 打印子切片从索引1(包含) 到索引4(不包含)*/
	fmt.Println("numbers[1:4] ==", numbers[1:4])

	/* 默认下限为 0*/
	fmt.Println("numbers[:3] ==", numbers[:3])

	/* 默认上限为 len(s)*/
	fmt.Println("numbers[4:] ==", numbers[4:])

	numbers1 := make([]int, 0, 5)
	printSlice(numbers1)

	var num []int
	printSlice(num)
	if num == nil {
		fmt.Printf("num is empty\n")
	}

	/* 打印子切片从索引  0(包含) 到索引 2(不包含) */
	number2 := numbers[:2]
	printSlice(number2)

	/* 打印子切片从索引 2(包含) 到索引 5(不包含) */
	number3 := numbers[2:]
	printSlice(number3)

	/* 同时添加多个元素 */
	number2 = append(number2, 99, 88)
	printSlice(number2)

	//因为切片是原底层数组的引用，number2追加了99,88后，底层数组的2,3被99,88覆盖
	//因此number3的前两个元素2,3已经被99,88覆盖
	printSlice(number3) //len=7 cap=7 slice=[99 88 4 5 6 7 8]

	/* 拷贝 number3 的内容到 number2 */
	copy(number2, number3)
	printSlice(number2) //对应位置拷贝:len=4 cap=9 slice=[99 88 4 5]

}

func printSlice(x []int) {
	fmt.Printf("len=%d cap=%d slice=%v\n", len(x), cap(x), x)
}
