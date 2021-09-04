#include <stdio.h>
#include <math.h>
#include <string.h>
int check(long long n)
{
    int chan = 0, le = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            chan++;
            n /= 10;
        }
        else
        {
            le++;
            n /= 10;
        }
    }
    if (chan > le)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long n;
        scanf("%lld", &n);
        if (n % 2 == 0 && check(n))
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