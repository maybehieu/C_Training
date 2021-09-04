#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        int dem = 0;
        for (int j = i; dem < n; j--)
        {
            printf("%d", j);
            dem++;
            if (j == 1 && dem < n)
            {
                for (int k = j + 1; k <= n - dem + 1; k++)
                {
                    printf("%d", k);
                }
                break;
            }
        }
        printf("\n");
    }

    return 0;
}