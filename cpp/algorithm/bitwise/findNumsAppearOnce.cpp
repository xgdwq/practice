#include<iostream>

using namespace std;

// only one num appear odd times
int findNumAppearOddTimes(int a[], int start, int end) {
    int p = 0;
    for (int i = start; i <= end; i++) {
        p ^= a[i];
    }
    return p;
}

// two num appear odd times
int findNumAppearOddTimes2(int a[], int start, int end) {
    int p = 0;
    int p1 = 0;
    for (int i = start; i <= end; i++) {
        p ^= a[i];
    }
    //p保存了出现奇数次元素的异或结果，必不等于0，则肯定存在某位为1，该1的含义即表示两元素对应位不同（一个是1一个是0）
    int first_bit_1_of_p = p & (~p + 1);//找到异或结果的第一位1，结果即仅该位1，其它均为0
    for (int i = start; i <= end; i++) {
        if((a[i] & first_bit_1_of_p) != 0) {// 找出该位仅为1的元素进行异或
            p1 ^= a[i];//最后结果即是两元素中其中某位为1的那个数
        }
    }
    cout<<p1<<endl;
    cout<<(p1^p)<<endl;//根据异或规则找到另一个数
    return 0;
}

int main() {
    int a[] = {1,2,4,1,7,7,2,4,7};
    cout<<findNumAppearOddTimes(a, 0, 8)<<endl;
    int b[] = {1,2,4,1,2,7,2,4,7,9,8,9};
    findNumAppearOddTimes2(b, 0, 11);
    return 0;
}
