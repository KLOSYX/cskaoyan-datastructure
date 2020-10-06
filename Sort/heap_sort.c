#include "Sort.h"

void heapAdjust(int a[], int k, int n) {
    a[0] = a[k];
    for (int i = 2 * k; i <=n; i *= 2) {
        if (i < n && a[i] < a[i + 1]) ++i;
        if (a[0] >= a[i]) break;
        else {
            a[k] = a[i];
            k = i;
        }
    }
    a[k] = a[0];
}

void buildHeap(int a[], int n) {
    for (int i = n / 2; i > 0; --i) {
        heapAdjust(a, i, n);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapSort(int a[], int n) {
    buildHeap(a, n);
    for (int i = n; i > 1; --i) {
        swap(&a[1], &a[i]);
        heapAdjust(a, 1, i - 1);
    }
}

void main() {
    TEST_A;
    TEST_N;
    heapSort(a, n - 1);
    PRINT;
    CHECK;
}