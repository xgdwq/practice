#include <iostream>
using namespace std;

int swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    return 0;
}

int getPartion(int a[], int left, int right) {
    int i = left;
    int j = right;
    int x = a[left];
    while(i < j) {
        while(i < j && a[j] >= x) {
            j--;
        }
        if(i < j) {
            a[i++] = a[j];
        }
        while(i < j && a[i] <= x) {
            i++;
        }
        if(i < j) {
            a[j--] = a[i];
        }
    }
    a[i] = x;
    return i;
}

int getPartion2(int a[], int left, int right) {
    int x = a[right];
    int i = left - 1;
    for (int j = left; j <= right-1; j++) {
        if(a[j] <= x) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[right]);
    return i + 1;
}
// 递归
void quickSort(int a[], int left, int right) {
    if (left < right) {
        int p = getPartion2(a, left, right);
        quickSort(a, left, p-1);
        quickSort(a, p+1, right);
    }
}
//迭代
void quickSort2(int a[], int left, int right) {
    // 数组表示栈，思想即为不断的将划分好的左右端点压栈，出栈完毕后，数组即已经排序好
    int stack[right - left + 1];
    int top = -1;
    stack[++top] = left;
    stack[++top] = right;
    while(top >= 0) {
        int r = stack[top--];
        int l = stack[top--];
        int p = getPartion(a, l, r);
        if (l < p - 1) {
            stack[++top] = l;
            stack[++top] = p - 1;
        }
        if(r > p + 1) {
            stack[++top] = p + 1;
            stack[++top] = r;
        }
    }
}

int main() {
    int a[] = {10,5,7,9,3,5,8,1,6};
    int n = sizeof(a) / sizeof(*a);
    //cout<<getPartion2(a,0,n-1)<<endl;
    quickSort2(a, 0, n - 1);
    for(int i = 0; i < n; i++) {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
