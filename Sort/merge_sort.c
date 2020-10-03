#include "Sort.h"

int b[N];

void merge(int a[], int low, int mid, int high) {
    int i, j, k;
    for (i = low; i <= high; ++i) b[i] = a[i];
    for(i = low, j = mid + 1, k = i; i <= mid && j <= high; ++k) {
        if (b[i] <= b[j])
            a[k] = b[i++];
        else
            a[k] = b[j++];
    }
    while (i <= mid) a[k++] = b[i++];
    while (j <= high) a[k++] = b[j++];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

void main() {
    TEST_A;
    TEST_N;
    mergeSort(a, 0, 9);
    PRINT;
    CHECK;
}

