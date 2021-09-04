#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    float sum = 0.00;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("%.4f", sum);
    return 0;
}