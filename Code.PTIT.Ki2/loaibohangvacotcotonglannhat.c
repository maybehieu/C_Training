#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int m, n, arr[100][100] = {};
        scanf("%d %d", &m, &n);
        int cot = 0, hang = 0, pos;
        for (int i = 0; i < m; i++)
        {
            int tempHang = 0;
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
                tempHang += arr[i][j];
            }
            if (tempHang > hang)
            {
                hang = tempHang;
                pos = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[pos][i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            int tempCot = 0;
            for (int j = 0; j < m; j++)
            {
                tempCot += arr[j][i];
            }
            if (tempCot > cot)
            {
                cot = tempCot;
                pos = i;
            }
        }
        for (int i = 0; i < m; i++)
        {
            arr[i][pos] = -1;
        }
        printf("Test %d:\n", a);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == -1)
                {
                    continue;
                }
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}