#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int m, n;
        long long arr[100][100] = {};
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%lld", &arr[i][j]);
            }
        }
        printf("Test %d:\n", a);
        for (int i1 = 0; i1 < n; i1++)
        {
            for (int j1 = 0; j1 < m; j1++)
            {
                for (int i2 = i1; i2 < n; i2++)
                {
                    for (int j2 = j1; j2 < m; j2++)
                    {
                        if (arr[i1][j1] > arr[i2][j2])
                        {
                            long long temp = arr[i1][j1];
                            arr[i1][j1] = arr[i2][j2];
                            arr[i2][j2] = temp;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%lld ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
