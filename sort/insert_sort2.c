#include "Sort.h"

void insertSort2(int a[], int n) {
    int i, j, temp;
    for(i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) { 
            // 折半查找开始
            int low = 0, high = i - 1, mid;
            while (low <= high) {
                mid = (low + high) / 2;
                if (a[mid] > a[i]) high = mid - 1;
                else low = mid + 1;
            }
            // 折半查找结束  
            temp = a[i];
            for (j = i - 1; j >= low; --j) {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
            //插入位置后的元素右移
        }
    }
}

void main() {
    TEST_A;
    TEST_N;
    MAIN(insertSort2);
    PRINT;
}