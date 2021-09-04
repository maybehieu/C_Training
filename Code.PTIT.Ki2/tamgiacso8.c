#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, j, k = 0;
    scanf("%d", &n);
    int dem = 0, in;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            in = dem + 1;
        }
        else
        {
            in = dem + i;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", in);
            if (i % 2 == 1)
            {
                in++;
            }
            else
            {
                in--;
            }
            dem++;
        }

        printf("\n");
    }

    return 0;
}