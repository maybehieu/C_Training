#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
long long mangNgto[1000000];
void sangEra()
{
    for (int i = 0; i <= 1000000; i++)
    {
        mangNgto[i] = 1;
    }
    mangNgto[0] = 0, mangNgto[1] = 0;
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (mangNgto[i] == 1)
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                mangNgto[j] = 0;
            }
        }
    }
}
int main()
{
    sangEra();
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long m, n, dem = 0;
        scanf("%lld %lld", &m, &n);
        for (long long i = m; i <= sqrt(n); i++)
        {
            if (mangNgto[i])
            {
                dem++;
            }
        }
        printf("%lld\n", dem);
    }

    return 0;
}