#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        if (sum % 10 == 0)
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