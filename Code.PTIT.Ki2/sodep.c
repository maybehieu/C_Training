#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(long long n)
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
int main()
{
    int m, n, arr[10000], fibo[] = {0, 1, 2, 3, 5, 8, 13, 21};
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        int temp;
        temp = m;
        m = n;
        n = temp;
    }
    for (int i = m; i <= n; i++)
    {
        int tong = 0, chuso, tmp;
        tmp = i;
        if (isPrime(i))
        {
            while (tmp > 0)
            {
                chuso = tmp % 10;
                tong += chuso;
                tmp /= 10;
            }
            for (int j = 0; j < 8; j++)
            {
                if (tong == fibo[j])
                {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }
    return 0;
}