#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
            printf("\n\n");
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                printf("*");
            }
            else if (j == n - 1)
            {
                printf("*\n\n");
            }
            else
            {
                printf(".");
            }
        }
    }

    return 0;
}