#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        int dem = 0, temp = n;
        if (i > n)
        {
            temp = temp + n;
        }
        for (int j = i; j <= temp; j++)
        {
            printf("%d", j);
            dem++;
            if (j >= n && dem < n)
            {
                for (int k = 0; k < n - dem; k++)
                {
                    printf("%d", j - 1);
                    j--;
                }
                break;
            }
        }
        printf("\n");
    }

    return 0;
}