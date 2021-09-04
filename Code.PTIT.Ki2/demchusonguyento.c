#include <stdio.h>
#include <math.h>
#include <string.h>
int v[20], p = 0;
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
void tach(long long n)
{
    do
    {
        v[p] = n % 10;
        n /= 10, p++;
    } while (n > 0);
}
int main()
{
    long long n, arr[4] = {}, danhdau[10] = {};
    scanf("%lld", &n);
    tach(n);
    for (int i = p - 1; i >= 0; i--)
    {
        if (isPrime(v[i]))
        {
            danhdau[v[i]]++;
        }
    }
    for (int i = p - 1; i >= 0; i--)
    {
        if (danhdau[v[i]] != 0)
        {
            printf("%d %d\n", v[i], danhdau[v[i]]);
            danhdau[v[i]] = 0;
        }
    }
    return 0;
}