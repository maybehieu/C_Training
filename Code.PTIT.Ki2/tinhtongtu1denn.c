#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        long long a;
        scanf("%lld", &a);
        int tong = (a * (1 + a)) / 2;
        printf("%lld\n", tong);
    }

    return 0;
}