#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef unsigned long int big;
big uoc(big m, big n)
{
    if (n == 0)
    {
        return m;
    }
    return uoc(n, m % n);
}
big boi(big m, big n)
{
    return (m * n) / uoc(m, n);
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        big res = 1;
        scanf("%d", &n);
        for (int i = 2; i <= n; i++)
        {
            res = boi(res, i);
        }
        printf("%lu\n", res);
    }

    return 0;
}