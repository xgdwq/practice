package main

import (
	"fmt"
	"io"
	"os"
)

func main() {
	cmdList := os.Args
	if len(cmdList) != 3 {
		fmt.Println("参数位数不对!")
		return
	}
	srcFileName := cmdList[1]
	distFileName := cmdList[2]
	if srcFileName == distFileName {
		fmt.Println("文件名字不能相同!")
		return
	}
	sF, err := os.Open(srcFileName)
	if err != nil {
		fmt.Println("打开源文件失败!")
		return
	}
	dF, err := os.Create(distFileName)
	if err != nil {
		fmt.Println("新建文件失败!")
		return
	}
	defer dF.Close()
	defer sF.Close()
	buf := make([]byte, 1024*4)
	for {
		n, err := sF.Read(buf)
		if err != nil {
			if err == io.EOF {
				fmt.Println("文件读取完成了!")
				break
			}
			fmt.Println("读取源文件失败!:err = ", err)
			return
		}
		dF.Write(buf[:n])
	}

}
