#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int solve(long long n)
{
    int arr[20] = {}, pos = 0;
    while (n > 0)
    {
        arr[pos] = n % 10;
        pos++, n /= 10;
    }
    int p = -1;
    pos--;
    for (int i = pos; i >= 0; i--)
    {
        if (arr[i] == 0 && arr[i - 1] == 8 && arr[i - 2] == 4)
        {
            p = i;
            break;
        }
    }
    if (p == -1)
    {
        return 0;
    }
    for (int i = pos; i >= 0; i--)
    {
        if (i == p)
        {
            i -= 2;
            continue;
        }
        printf("%d", arr[i]);
    }
    printf("\n");
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
        solve(n);
    }

    return 0;
}