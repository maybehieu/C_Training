#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[1000][10], danhdau[101];
void resetMang()
{
    for (int i = 0; i < 101; i++)
    {
        danhdau[i] = 0;
    }
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    resetMang();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                scanf("%d", &arr[i][j]);
            }
            else
            {
                scanf("%d", &arr[j][i]);
            }
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j == i || danhdau[arr[i][j]] != 0)
    //         {
    //             continue;
    //         }
    //         int temp = arr[j][i];
    //         arr[j][i] = arr[i][j];
    //         arr[i][j] = temp;
    //         danhdau[arr[j][i]]++;
    //     }
    // }
    int temp = m;
    m = n;
    n = temp;
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