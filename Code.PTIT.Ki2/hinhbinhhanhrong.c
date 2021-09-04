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
        for (int j = 0; j < n - i; j++)
        {
            printf("~");
            dau = j + 1;
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}