#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    float so, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &so);
        sum += so;
    }
    printf("%.3f", sum / n);
    return 0;
}