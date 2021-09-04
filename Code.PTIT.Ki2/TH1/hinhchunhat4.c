#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n, temp;
    scanf("%d %d", &m, &n);
    if (m < n)
    {
        temp = n;
    }
    else
    {
        temp = m;
    }
    int dem1 = 0;
    for (int i = temp; dem1 < m; i--)
    {
        int dem = 0;
        for (int j = i; dem < n; j--)
        {
            printf("%d", j);
            dem++;
            if (j == 1 && dem < n)
            {
                for (int k = j + 1; dem < n; k++)
                {
                    printf("%d", k);
                    dem++;
                }
                break;
            }
        }
        printf("\n");
        dem1++;
    }

    return 0;
}