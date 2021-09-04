#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n, sum1 = 0, sum2 = 0;
    scanf("%d %d", &m, &n);
    int a = m, b = n;
    while (m > 0)
    {
        sum1 += m % 10;
        m /= 10;
    }
    while (n > 0)
    {
        sum2 += n % 10;
        n /= 10;
    }
    if (sum1 <= sum2)
    {
        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d", b, a);
    }

    return 0;
}