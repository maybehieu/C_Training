#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int max;
    if (m > n)
    {
        max = m;
    }
    else
    {
        max = n;
    }
    for (int i = 0; i < m; i++)
    {
        char c = 'a' + max - 1;
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                printf("%c", c--);
            }
            else
            {
                printf("%c", c);
            }
        }
        printf("\n");
    }

    return 0;
}