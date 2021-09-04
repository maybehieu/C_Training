#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dau, cuoi = n % 10;
    while (n > 0)
    {
        dau = n % 10;
        n /= 10;
    }
    printf("%d %d", dau, cuoi);
    return 0;
}