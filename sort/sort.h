#include <stdio.h>
#define TEST(Fun) TEST_A; TEST_N; MAIN(Fun); PRINT;
#define TEST_A int a[10] = {20, 40, 30, 10, 60, 60, 55, 90, 80, 70}
#define TEST_N int n = 10
#define MAIN(Fun) Fun(a, n)
#define PRINT for(int i = 0; i < n; ++i){printf("%d\n", a[i]);}