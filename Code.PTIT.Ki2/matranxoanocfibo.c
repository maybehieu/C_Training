#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, fibo[10000] = {0, 1}, arr[100][100] = {};
    scanf("%d", &n);
    int a = 0, b = 1, c;
    for (int i = 2; i < (n * n); i++)
    {
        c = a + b;
        fibo[i] = c;
        a = b;
        b = c;
    }
    int check = 0, gt = 0, col = n - 1, row = n - 1;
    while (check <= n / 2)
    {
        for (int i = check; i <= col; i++)
        {
            arr[check][i] = fibo[gt++];
        }
        for (int i = check + 1; i <= row; i++)
        {
            arr[i][col] = fibo[gt++];
        }
        for (int i = col - 1; i >= check; i--)
        {
            arr[row][i] = fibo[gt++];
        }
        for (int i = row - 1; i > check; i--)
        {
            arr[i][check] = fibo[gt++];
        }
        check++, col--, row--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}