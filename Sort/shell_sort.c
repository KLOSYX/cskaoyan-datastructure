#include "Sort.h"

void shellSort(int a[], int n) {
    int i, j ,d, temp;
    for (d = n / 2; d >= 1; d /= 2)
        for (i = d; i < n; ++i)
            if (a[i-d] > a[i]) {
                temp = a[i];
                for (j = i - d; a[j] > temp && j >= 0; j -= d)
                    a[j + d] = a[j];
                a[j + d] = temp;
    }
}

void main() {
    TEST_A;
    TEST_N;
    MAIN(shellSort);
    CHECK;
}