#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, dau, cuoi;
        scanf("%d", &n);
        cuoi = n % 10;
        while (n > 0)
        {
            dau = n % 10;
            n /= 10;
        }
        if (dau == cuoi)
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