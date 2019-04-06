#include <iostream>

using namespace std;

struct RES {
    int start;
    int end;
    int sum;
};

struct RES maxSumOfContinueSubSeq(int a[], int start, int end) {
    //最大和起终点
    int s,e;
    s = e = start;
    //累计值，若累计值为负，还不如直接丢掉，从当前值重新开始累计；若为正，继续累加
    int total = a[start];
    int maxSum = a[start];
    for (int i = start + 1; i <= end; i++) {
        if (total >= 0) {
            total += a[i];
        }
        else {
            total = a[i];
            //变换起点
            s = i;
        }
        if (maxSum < total) {
            maxSum = total;
            //变换终点
            e = i;
        }
    }
    struct RES res;
    res.start = s;
    res.end = e;
    res.sum = maxSum;
    return res;
}

int main() {
    int a[] = {9,3,-1,-6,-10,15,4,-5};
    struct RES res = maxSumOfContinueSubSeq(a, 0, 7);
    cout << res.start<<" "<<res.end<<" "<<res.sum<<endl;
    return 0;
}
