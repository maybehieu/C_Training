#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int dau;
        if (i == n)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
            printf("\n");
            break;
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("~");
            dau = j + 1;
        }
        if (dau == 1)
        {
            // printf("*");
        }
        for (int j = n - dau; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}