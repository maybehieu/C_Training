#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        double a1, a2, b1, b2, kc;
        scanf("%lf%lf%lf%lf", &a1, &a2, &b1, &b2);
        kc = sqrt((b1 - a1) * (b1 - a1) + (b2 - a2) * (b2 - a2));
        printf("%.4lf\n", kc);
    }

    return 0;
}