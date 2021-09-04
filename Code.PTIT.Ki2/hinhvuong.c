#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int min;
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            printf("%d", n - min + 1);
        }
        for (int j = n - 1; j >= 1; j--)
        {
            int min;
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            printf("%d", n - min + 1);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            int min;
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            printf("%d", n - min + 1);
        }
        for (int j = n - 1; j >= 1; j--)
        {
            int min;
            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }
            printf("%d", n - min + 1);
        }
        printf("\n");
    }

    return 0;
}