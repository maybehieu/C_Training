#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, value;
    scanf("%d", &n);
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        value = 66;
        for (int j = 1; j <= c; j++)
        {
            if (j == 1 || j == c)
            {
                printf("@");
            }
            else if (j < (c + 1) / 2)
            {
                printf("%c", value);
                value += 2;
                if (j == (c + 1) / 2)
                {
                    printf("%c", value);
                    value -= 2;
                }
            }
            else
            {
                printf("%c", value);
                value -= 2;
            }
        }
        c += 2;
        printf("\n");
    }

    return 0;
}