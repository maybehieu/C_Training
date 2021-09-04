#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int check = 1, sum = 0;
        long long n;
        scanf("%lld", &n);
        long long num = 0;
        long long m = n;
        while (m > 0)
        {
            if (m % 2 == 0)
            {
                check = 0;
                break;
            }
            sum += m % 10;
            num = num * 10 + m % 10;
            m /= 10;
        }
        if (sum % 2 == 0)
        {
            check = 0;
        }
        if (check == 1 && num == n)
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