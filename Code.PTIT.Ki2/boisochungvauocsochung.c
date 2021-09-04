#include <stdio.h>
#include <math.h>
#include <string.h>
long long uoc(long long m, long long n)
{
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    return m;
}
long long boi(long long m, long long n)
{
    return (m * n) / uoc(m, n);
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        long long m, n;
        scanf("%lld %lld", &m, &n);
        printf("%lld %lld\n", boi(m, n), uoc(m, n));
    }

    return 0;
}