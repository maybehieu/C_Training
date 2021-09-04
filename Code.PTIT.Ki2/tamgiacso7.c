#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nhay, giatri;
    for (int i = 1; i <= n; i++)
    {
        nhay = n - 1;
        giatri = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", giatri);
            giatri += nhay;
            nhay--;
        }
        printf("\n");
    }

    return 0;
}