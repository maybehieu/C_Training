#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int tong = ((b - a + 1) * (a + b)) / 2;
    printf("%lld", tong);
    return 0;
}