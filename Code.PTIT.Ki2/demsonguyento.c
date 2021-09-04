#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int check(int a)
{
    if (!isPrime(a))
    {
        return 0;
    }
    while (a > 0)
    {
        if (!isPrime(a % 10))
        {
            return 0;
        }
        a /= 10;
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int m, n, dem = 0;
        scanf("%d%d", &m, &n);
        for (int i = m; i <= n; i++)
        {
            if (check(i))
            {
                dem++;
            }
        }
        printf("%d\n", dem);
    }

    return 0;
}