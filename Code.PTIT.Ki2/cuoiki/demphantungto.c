#include <stdio.h>
#include <math.h>
#include <string.h>
int mangNgto[10005];
void sangEra()
{
    for (int i = 0; i <= 10005; i++)
    {
        mangNgto[i] = 1;
    }
    mangNgto[0] = 1, mangNgto[1] = 1;
    for (int i = 2; i * i <= 10005; i++)
    {
        if (mangNgto[i] == 1)
        {
            for (int j = i * i; j <= 10005; j += i)
            {
                mangNgto[j] = 0;
            }
        }
    }
    mangNgto[0] = 0, mangNgto[1] = 0;
}
int main()
{
    sangEra();
    int n, arr[100][100] = {}, danhdau[100][100] = {}, dem = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j && danhdau[i][j] == 0)
            {
                if (mangNgto[arr[i][j]] == 1)
                {
                    dem++;
                    danhdau[i][j]++;
                    // printf("%d ", arr[i][j]);
                }
            }
            else if (i == n - 1 - j)
            {
                if (danhdau[i][j] == 0)
                {
                    if (mangNgto[arr[i][j]] == 1)
                    {
                        dem++;
                        danhdau[i][j]++;
                        // printf("%d ", arr[i][j]);
                    }
                }
            }
        }
    }
    printf("%d", dem);

    return 0;
}