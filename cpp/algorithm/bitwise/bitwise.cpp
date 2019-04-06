#include <iostream>

using namespace std;


//计算n的二进制形式中1的个数
int calNumOf1 (unsigned int n) {
    /*********
    int count = 0;
    while (n != 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
    */
    //n&(n-1)表示把n的最右边的1变为0,即看直至n=0，可以执行这样的操作多少次,既有多少个1
    int count = 0;
    while (n!= 0) {
        count ++;
        n = n & (n - 1);
    }
    return count;
}

//计算n的二进制形式中0的个数
int calNumOf0 (unsigned int n) {
    if (n == 0) {
        return 32;
    }
    int count = 0;
    while (n != 0) {
        if ((n & 1) != 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}

//判断n是否奇偶数
//偶数二进制最后一位必定是0
const char* judgeEO (unsigned int n) {
    return (n & 1) == 1 ? "odd" : "even";
}

//二进制连续高位0的个数
int continueHigh0 (unsigned int n) {
    if (n == 0) {
        return 32;
    }
    int count = 0;
    int mask = 0x80000000;
    int i = n & mask;
    while(i == 0) {
        count ++;
        n <<= 1;
        i = n & mask;
    } 
    return count;
}

int main() {
    unsigned int n = 11;
    cout<<n<<": 二进制中1的个数为: "<<calNumOf1(n)<<endl;
    cout<<n<<": 二进制中0的个数为: "<<calNumOf0(n)<<endl;
    cout<<n<<": is "<<judgeEO(n)<<endl;
    cout<<n<<": 连续高位0的个数为: "<<continueHigh0(n)<<endl;
    return 0;
}
