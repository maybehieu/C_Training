#include <stdio.h>
#include <math.h>
#include <string.h>
int uoc(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    return uoc(n, m % n);
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (uoc(i, j) == 1)
            {
                printf("(%d,%d)\n", i, j);
            }
        }
    }

    return 0;
}