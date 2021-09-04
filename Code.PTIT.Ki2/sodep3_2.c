#include <stdio.h>
#include <math.h>
#include <string.h>
int thuannghich(long long n)
{
    int sum = 0;
    long long m = n;
    while (m > 0)
    {
        while (m > 0)
        {
            sum = sum * 10 + m % 10;
            m /= 10;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}
int tong(long long n)
{
    int sum = 0;
    long long m = n;
    while (m > 0)
    {
        sum += m % 10;
        m /= 10;
    }
    int soCuoi = sum % 10;
    if (soCuoi == 8)
    {
        return 1;
    }
    return 0;
}
int checkso(long long n)
{
    while (n > 0)
    {
        int so = n % 10;
        if (so == 6)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}
int main()
{
    long long m, n;
    scanf("%lld %lld", &m, &n);
    if (m > n)
    {
        long long swap = m;
        m = n;
        n = swap;
    }
    for (long long i = m; i < n; i++)
    {
        long long temp1 = i;
        long long temp2 = i;
        long long temp3 = i;
        if (!checkso(temp3))
        {
            continue;
        }
        if (!thuannghich(temp1))
        {
            continue;
        }
        if (!tong(temp2))
        {
            continue;
        }
        printf("%lld ", i);
    }

    return 0;
}