#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int uoc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return uoc(b, a % b);
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (uoc(a, b) == uoc(c, d))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}