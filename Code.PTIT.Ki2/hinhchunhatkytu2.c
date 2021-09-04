#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n, constVar, temp;
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        constVar = n + 1;
    }
    for (int i = 1; i <= m; i++) //so hang
    {
        if (i > n)
        {
            temp = constVar;
        }
        else
        {
            temp = i;
        }
        for (int j = 1; j <= n; j++) // so ptu 1 hang
        {
            if (i + j < n + 1)
            {
                printf("%c", temp + 64);
                temp++;
            }
            else if (i + j > n + 1)
            {
                printf("%c", temp - 1 + 64);
                temp--;
            }
            else
            {
                printf("%c", n + 64);
                temp = i;
            }
        }
        printf("\n");
    }

    return 0;
}