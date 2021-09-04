#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int solve(int n, int p)
{
    int dem = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp = i;
        while (temp % p == 0)
        {
            dem++, temp /= p;
        }
    }
    return dem;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, p;
        scanf("%d %d", &n, &p);
        printf("%d\n", solve(n, p));
    }

    return 0;
}