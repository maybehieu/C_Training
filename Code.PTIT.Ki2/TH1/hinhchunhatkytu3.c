#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        int temp = i;
        for (int j = 1; j <= n; j++)
        {
            if (i + j >= n + 1)
            {
                printf("%c", n + 63);
            }
            else
            {
                printf("%c", temp + 63);
                temp++;
            }
        }
        printf("\n");
    }

    return 0;
}