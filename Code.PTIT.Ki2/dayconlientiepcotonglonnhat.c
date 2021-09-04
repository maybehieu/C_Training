#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
long long Max(long long a, long long b)
{
    return (a < b) ? b : a;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        long long max = 0, sum = 0, arr[100005] = {};
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            sum = Max(arr[i], sum + arr[i]);
            max = Max(sum, max);
        }
        printf("%lld\n", max);
    }

    return 0;
}