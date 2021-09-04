#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        long long n;
        scanf("%lld", &n);
        long long sum = 0;
        long long m = n;
        while (m > 0)
        {
            sum = sum * 10 + m % 10;
            m /= 10;
        }
        if (sum == n)
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