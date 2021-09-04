#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0 && b != 0)
    {
        printf("Vo nghiem");
    }
    else if (a == a && b == 0)
    {
        printf("Vo so nghiem");
    }
    else
    {
        printf("%.2f", -b / (float)a);
    }

    return 0;
}