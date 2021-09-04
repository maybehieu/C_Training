#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int check(int n)
{
    int temp = n, num = 0, sum = 0;
    while (temp > 0)
    {
        if (temp % 10 == 4)
        {
            return 0;
        }
        sum += temp % 10;
        num = num * 10 + temp % 10;
        temp /= 10;
    }
    if (num == n && sum % 10 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, min = 1, max;
        scanf("%d", &n);
        for (int i = 1; i < n; i++)
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