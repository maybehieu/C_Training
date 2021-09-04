#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int arr[100][100] = {}, n;
        scanf("%d", &n);
        int check = 0, gt = n * n, col = n - 1, row = n - 1;
        while (check <= n / 2)
        {
            for (int i = check; i <= col; i++)
            {
                arr[check][i] = gt--;
            }
            for (int i = check + 1; i <= row; i++)
            {
                arr[i][col] = gt--;
            }
            for (int i = col - 1; i >= check; i--)
            {
                arr[row][i] = gt--;
            }
            for (int i = row - 1; i > check; i--)
            {
                arr[i][check] = gt--;
            }
            check++, col--, row--;
        }
        printf("Test %d:\n", a);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}