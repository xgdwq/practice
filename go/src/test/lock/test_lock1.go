package main

import (
	"fmt"
	"math/rand"
	"sync"
	"time"
)

var count int

var mutex sync.RWMutex

func write(n int) {
	rand.Seed(time.Now().UnixNano())
	mutex.Lock()
	fmt.Printf("写 goroutine %d 正在写数据...\n", n)
	num := rand.Intn(500)
	count = num
	fmt.Printf("写 goroutine %d 写数据结束，写入新值 %d\n", n, num)
	mutex.Unlock()

}
func read(n int) {
	mutex.RLock()
	fmt.Printf("读 goroutine %d 正在读取数据...\n", n)
	num := count
	fmt.Printf("读 goroutine %d 读取数据结束，读到 %d\n", n, num)
	mutex.RUnlock()
}
func main() {
	for i := 0; i < 10; i++ {
		go read(i + 1)
	}
	for i := 0; i < 10; i++ {
		go write(i + 1)
	}
	time.Sleep(time.Second * 5)
}

//读 goroutine 10 正在读取数据...
//读 goroutine 10 读取数据结束，读到 0
//写 goroutine 1 正在写数据...
//写 goroutine 1 写数据结束，写入新值 386
//读 goroutine 1 正在读取数据...
//读 goroutine 8 正在读取数据...
//读 goroutine 8 读取数据结束，读到 386
//读 goroutine 5 正在读取数据...
//读 goroutine 5 读取数据结束，读到 386
//读 goroutine 1 读取数据结束，读到 386
//读 goroutine 7 正在读取数据...
//读 goroutine 9 正在读取数据...
//读 goroutine 9 读取数据结束，读到 386
//读 goroutine 3 正在读取数据...
//读 goroutine 3 读取数据结束，读到 386
//读 goroutine 7 读取数据结束，读到 386
//读 goroutine 6 正在读取数据...
//读 goroutine 6 读取数据结束，读到 386
//读 goroutine 2 正在读取数据...
//读 goroutine 4 正在读取数据...
//读 goroutine 4 读取数据结束，读到 386
//读 goroutine 2 读取数据结束，读到 386
//写 goroutine 7 正在写数据...
//写 goroutine 7 写数据结束，写入新值 488
//写 goroutine 6 正在写数据...
//写 goroutine 6 写数据结束，写入新值 118
//写 goroutine 10 正在写数据...
//写 goroutine 10 写数据结束，写入新值 131
//写 goroutine 8 正在写数据...
//写 goroutine 8 写数据结束，写入新值 56
//写 goroutine 9 正在写数据...
//写 goroutine 9 写数据结束，写入新值 228
//写 goroutine 2 正在写数据...
//写 goroutine 2 写数据结束，写入新值 459
//写 goroutine 3 正在写数据...
//写 goroutine 3 写数据结束，写入新值 340
//写 goroutine 4 正在写数据...
//写 goroutine 4 写数据结束，写入新值 447
//写 goroutine 5 正在写数据...
//写 goroutine 5 写数据结束，写入新值 127

//以上20个协程，得到锁的顺序是OS分配的，不确定
//以上结果可以看出读取操作可以并行（比如1,8,5同时获取了读锁），但是同时只能有一个写
/*
————————————————
版权声明：本文为CSDN博主「Delato」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_42927934/article/details/82533940
*/
