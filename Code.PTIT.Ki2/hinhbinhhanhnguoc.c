#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int dau = m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("~");
        }
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
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