#include <stdio.h>
#include <math.h>
#include <string.h>
long long uoc(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return uoc(b, a % b);
}
long long boi(long long a, long long b)
{
    return (a * b) / uoc(a, b);
}
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld", uoc(a, b), boi(a, b));
    return 0;
}