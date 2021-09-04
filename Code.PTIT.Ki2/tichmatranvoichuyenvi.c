#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int m, n, arr[100][100] = {}, chuyenvi[100][100] = {};
        long long res[100][100] = {};
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &arr[i][j]);
                chuyenvi[j][i] = arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    res[i][j] += arr[i][k] * chuyenvi[k][j];
                }
            }
        }
        printf("Test %d:\n", a);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%lld ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}