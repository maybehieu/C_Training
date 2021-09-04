#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, value;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int temp = n - 1;
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("%c ", i + 64);
                value = i;
                continue;
            }
            printf("%c ", value + temp + 64);
            value += temp;
            temp--;
        }
        printf("\n");
    }

    return 0;
}