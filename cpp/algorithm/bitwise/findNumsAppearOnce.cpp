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
    int first_bit_1_of_p = p & (~p + 1);
    for (int i = start; i <= end; i++) {
        if((a[i] & first_bit_1_of_p) != 0) {
            p1 ^= a[i];
        }
    }
    cout<<p1<<endl;
    cout<<(p1^p)<<endl;
    return 0;
}

int main() {
    int a[] = {1,2,4,1,7,7,2,4,7};
    cout<<findNumAppearOddTimes(a, 0, 8)<<endl;
    int b[] = {1,2,4,1,2,7,2,4,7,9,8,9};
    findNumAppearOddTimes2(b, 0, 11);
    return 0;
}
