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
        int n;
        scanf("%d", &n);
        if (isPrime(n))
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