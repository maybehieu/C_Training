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
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        int lan = 0;
        for (int i = m; i < n; i++)
        {
            if (isPrime(i))
            {
                int sum = 0, temp = i;
                while (temp > 0)
                {
                    sum = sum * 10 + temp % 10;
                    temp /= 10;
                }
                if (lan == 10)
                {
                    printf("\n");
                    lan = 0;
                }
                if (sum == i)
                {
                    printf("%d ", i);
                    lan++;
                }
            }
        }
        printf("\n");
    }

    return 0;
}