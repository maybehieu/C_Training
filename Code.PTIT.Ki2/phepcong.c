#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a, b, c;
    scanf("%d + %d = %d", &a, &b, &c);
    if (a + b == c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}