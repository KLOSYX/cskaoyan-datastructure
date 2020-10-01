#include "sort.h"

void insertSort_1(int a[], int n) {
    int i, j, temp;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            temp = a[i];
            for (j = i - 1; temp < a[j] && j >= 0; --j) {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
        }
    }
}

void main() {
    TEST_A;
    TEST_N;
    MAIN(insertSort_1);
    PRINT;
}