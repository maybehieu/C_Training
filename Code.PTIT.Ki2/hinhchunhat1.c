#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        if (i > n)
        {
            printf("%d", i);
            for (int j = n - 1; j > 0; j--)
            {
                printf("%d", j);
            }
            printf("\n");
            continue;
        }
        int k = i - 1;
        for (int j = i; j < i + n; j++)
        {
            if (j <= n)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", k--);
            }
        }
        printf("\n");
    }
    return 0;
}