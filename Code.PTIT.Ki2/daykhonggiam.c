#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        long long n, check = 1;
        scanf("%lld", &n);
        while (n > 1)
        {
            long long temp1 = n % 10;
            long long temp2 = (n % 100 - temp1) / 10;
            n /= 10;
            if (temp1 < temp2)
            {
                printf("NO\n");
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            printf("YES\n");
        }
    }

    return 0;
}