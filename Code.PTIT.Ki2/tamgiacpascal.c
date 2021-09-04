#include <stdio.h>
#include <math.h>
#include <string.h>
int giaiThua(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            long long giatri = giaiThua(i) / (giaiThua(j) * giaiThua(i - j));
            printf("%lld ", giatri);
        }
        printf("\n");
    }

    return 0;
}