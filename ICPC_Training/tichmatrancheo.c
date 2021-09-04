#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int n, arr[100][100] = {}, chuyenvi[100][100] = {};
        long long res[100][100] = {};
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arr[i][j] = j;
                if (j == i)
                {
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                chuyenvi[j][i] = arr[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k <= n; k++)
                {
                    res[i][j] += arr[i][k] * chuyenvi[k][j];
                }
            }
        }
        printf("Test %d:\n", a);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%lld ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}