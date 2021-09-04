#include <stdio.h>
#include <math.h>
#include <string.h>
int m, n, i, j;
int check(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != 1)
            {
                j = n / i;
            }
            sum = sum + i + j;
            j = 0;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        int temp = m;
        m = n;
        n = temp;
    }

    for (i = m; i < n; i++)
    {
        if (check(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}