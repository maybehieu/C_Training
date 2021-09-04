#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, value = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c ", value + 97);
                value++;
            }
        }
        else
        {
            for (int j = i; j > 0; j--)
            {
                printf("%c ", value + 97 + j - 1);
            }
            value += i;
        }
        printf("\n");
    }

    return 0;
}