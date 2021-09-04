#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int solve(long long n)
{
    long long num = 0;
    int arr[100] = {}, pos = 0;
    while (n > 0)
    {
        int m = n % 10;
        switch (m)
        {
        case 0:
        case 8:
        case 9:
            arr[pos] = 0;
            pos++;
            n /= 10;
            break;
        case 1:
            arr[pos] = 1;
            pos++;
            n /= 10;
            break;

        default:
            printf("INVALID\n");
            return 0;
            break;
        }
    }
    for (int i = pos - 1; i >= 0; i--)
    {
        num = num * 10 + arr[i];
    }
    if (num == 0)
    {
        printf("INVALID\n");
        return 0;
    }
    printf("%lld\n", num);
    return 1;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long n;
        scanf("%lld", &n);
        solve(n);
    }

    return 0;
}