#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        double n;
        scanf("%lf", &n);
        printf("%.15lf\n", 1 / n);
    }

    return 0;
}