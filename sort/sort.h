#include <stdio.h>
#define TEST_A int a[10] = {20, 40, 30, 10, 60, 60, 55, 90, 80, 70}
#define TEST_N int n = 10
#define MAIN(F)  \
    do           \
    {            \
        F(a, n); \
    } while (0)
#define PRINT                       \
    do                              \
    {                               \
        for (int i = 0; i < n; ++i) \
        {                           \
            printf("%d\n", a[i]);   \
        }                           \
    } while (0)
#define CHECK                                       \
    do                                              \
    {                                               \
        for (int i = 1; i < n; ++i)                 \
        {                                           \
            if (a[i] < a[i - 1])                    \
            {                                       \
                printf("------TEST FAILURE------"); \
                return;                             \
            }                                       \
        }                                           \
        printf("-----TEST PASS-----");              \
    } while (0)