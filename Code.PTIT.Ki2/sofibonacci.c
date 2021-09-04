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
        long long a = 0, b = 1, c;
        scanf("%d", &n);
        if (n == 0 || n == 1)
        {
            printf("1\n");
            break;
        }
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld\n", c);
    }

    return 0;
}