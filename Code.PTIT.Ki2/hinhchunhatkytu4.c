#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        int x = a - i + 1;
        for (int j = 1; j <= b; j++)
        {
            if (x < b)
            {
                printf("%c", x + 64);
                x++;
            }
            else
            {
                printf("%c", b + 64);
            }
        }
        printf("\n");
    }
    return 0;
}