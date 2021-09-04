#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int solve(long long n)
{
    int dau, cuoi;
    cuoi = n % 10;
    n /= 10;
    long long num = 0, m = n, temp;
    for (long long i = 10;; i *= 10)
    {

        if (n % i == n)
        {
            m = m / i + n % (i / 10);
            dau = (n - m) % i / (i / 10);
            break;
        }
    }
    temp = m;
    while (temp > 0)
    {
        num = num * 10 + temp % 10;
        temp /= 10;
    }
    if (num != m)
    {
        return 0;
    }
    if ((dau / cuoi) != 2 && (cuoi / dau) != 2)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long n;
        scanf("%lld", &n);
        if (solve(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}