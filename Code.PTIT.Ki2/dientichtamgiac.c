#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.141592653589793238

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        double x1, y1, x2, y2, x3, y3;
        double AB, AC, BC;
        scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        int check = 1;
        if ((AB + BC > AC) && (AB + AC > BC) && (AC + BC > AB))
        {
            double s = (AB + BC + AC) / 2.0;
            double S = sqrt(s * (s - AB) * (s - BC) * (s - AC));
            printf("%.2lf\n", S);
        }
        else
        {
            printf("INVALID\n");
        }
    }

    return 0;
}