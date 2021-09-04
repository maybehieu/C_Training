#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a = 0, b = 1, c, n;
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("1");
    }

    for (int i = 2; i < 10000; i++)
    {
        c = a + b;
        if (n == c)
        {
            printf("1");
            break;
        }
        a = b;
        b = c;
        if (n < c)
        {
            printf("0");
            break;
        }
    }

    return 0;
}