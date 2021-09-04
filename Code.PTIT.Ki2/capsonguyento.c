#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int mangNgto[10005] = {};

void sangEra()
{
    for (int i = 0; i <= 10005; i++)
    {
        mangNgto[i] = 1;
    }
    mangNgto[0] = 0, mangNgto[1] = 0;
    for (int i = 2; i * i <= 10005; i++)
    {
        if (mangNgto[i] == 1)
        {
            for (int j = i * i; j <= 10005; j += i)
            {
                mangNgto[j] = 0;
            }
        }
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    sangEra();
    while (test--)
    {
        int n, check = 0;
        scanf("%d", &n);
        for (int i = 2; i <= n / 2; i++)
        {
            if (mangNgto[i] == 1 && mangNgto[n - i] == 1)
            {
                printf("%d %d ", i, n - i);
            }
        }
        printf("\n");
    }

    return 0;
}