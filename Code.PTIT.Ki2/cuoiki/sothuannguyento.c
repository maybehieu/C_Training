#include <stdio.h>
#include <math.h>
#include <string.h>
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
int chusoNT(int n)
{
    int m;
    long long s = 0;
    while (n != 0)
    {
        m = n % 10;
        if (isPrime(m) == 0)
        {
            return 0;
        }
        n /= 10;
        s += m;
    }
    if (isPrime(s) == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{

    int m, n, d = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (chusoNT(i) && isPrime(i))
        {
            printf("%d ", i);
        }
    }
}