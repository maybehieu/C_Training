#include <stdio.h>
#include <math.h>
int main()
{
    long long m, n;
    scanf("%lld%lld", &m, &n);
    double c = sqrt(n);
    double b = sqrt(m);
    if (b == (int)b)
        b = b - 1;
    printf("%d\n", (int)c - (int)b);
    for (int i = sqrt(m); i < sqrt(n); i++)
    {
        if (i > 1 && m <= (i * i))
            printf("%lld\n", i * i);
    }
}