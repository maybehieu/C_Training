#include <stdio.h>
#include <math.h>
#include <string.h>

int n;
long long giaithua = 1, tong = 0;
long long tonggiaithua(int n)
{
    for (int i = 1; i <= n; i++)
    {
        giaithua *= i;
        tong += giaithua;
    }
    return tong;
}
int main()
{
    scanf("%d", &n);
    printf("%lld", tonggiaithua(n));
    return 0;
}