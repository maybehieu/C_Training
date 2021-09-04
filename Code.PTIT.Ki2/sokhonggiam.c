#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int check(int a)
{
    while (a > 0)
    {
        int m = a % 10;
        a /= 10;
        if (a % 10 > m)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int so, min = 1, max;
        scanf("%d", &so);
        for (int i = 1; i < so; i++)
        {
            min *= 10;
        }
        max = min * 10;
        for (int i = min; i < max; i++)
        {
            if (check(i))
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}