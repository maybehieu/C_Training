#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == j || i == n)
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