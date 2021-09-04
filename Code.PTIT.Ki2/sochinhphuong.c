#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, i = 0, check = 1;
        scanf("%d", &n);
        while (i * i <= n)
        {
            if (i * i == n)
            {
                printf("YES\n");
                check = 0;
                break;
            }
            i++;
        }
        if (check == 1)
        {
            printf("NO\n");
        }
    }

    return 0;
}