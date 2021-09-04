#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m <= 0 || n <= 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        printf("%d %d", (m + n) * 2, m * n);
    }

    return 0;
}