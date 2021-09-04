#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int m, arr[100][100] = {}, a, b;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][m - i - 1];
        arr[i][m - i - 1] = temp;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}