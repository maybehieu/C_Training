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
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long n;
        scanf("%lld", &n);
        long long max = 0;
        for (long long i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                long long temp = n / i;
                if (isPrime(temp) && temp > max)
                {
                    max = temp;
                    break;
                }
                if (isPrime(i) && i > max)
                {
                    max = i;
                }
            }
        }
        printf("%lld\n", max);
    }

    return 0;
}