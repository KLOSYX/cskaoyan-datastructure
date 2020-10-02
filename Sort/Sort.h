#include <stdio.h>
#define TEST_A int a[10] = {7, 8, 5, 5, 3, 2, 4, 1, 9, 6}
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
#define CHECK                                               \
    do                                                      \
    {                                                       \
        for (int i = 1; i < n; ++i)                         \
        {                                                   \
            if (a[i] < a[i - 1])                            \
            {                                               \
                printf("------ORDER TEST FAILURE------\n"); \
                return;                                     \
            }                                               \
        }                                                   \
        printf("------ORDER TEST PASS------\n");            \
    } while (0)