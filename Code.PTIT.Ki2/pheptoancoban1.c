#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    float a = m, b = n;
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        printf("%d %d %lld %.2f %d", m + n, m - n, m * n, a / b, m % n);
    }

    return 0;
}