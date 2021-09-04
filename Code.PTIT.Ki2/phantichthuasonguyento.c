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
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                printf("%d ", i);
                n /= i;
            }
        }
        printf("\n");
    }

    return 0;
}