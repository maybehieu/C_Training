#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, n, arr[100][100] = {}, a, b;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d %d", &a, &b);
    for (int i = 0; i < m; i++)
    {
        int temp = arr[i][a - 1];
        arr[i][a - 1] = arr[i][b - 1];
        arr[i][b - 1] = temp;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}