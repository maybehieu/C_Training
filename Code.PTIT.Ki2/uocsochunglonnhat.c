#include <stdio.h>
#include <math.h>
#include <string.h>
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
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", uoc(a, b));
    }

    return 0;
}