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
        printf("%lld\n", n * 2);
    }

    return 0;
}