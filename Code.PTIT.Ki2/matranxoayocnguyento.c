#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int n, arr[100][100] = {}, soNT[1000] = {};
        scanf("%d", &n);
        int check = 0, gt = 1, col = n - 1, row = n - 1, dem = 0, pos = 0;
        for (int i = 0; dem < n * n; i++)
        {
            if (isPrime(i))
            {
                soNT[pos] = i;
                dem++, pos++;
            }
        }
        pos = 0;
        while (check <= n / 2)
        {
            for (int i = check; i <= col; i++)
            {
                arr[check][i] = soNT[pos];
                pos++;
            }
            for (int i = check + 1; i <= row; i++)
            {
                arr[i][col] = soNT[pos];
                pos++;
            }
            for (int i = col - 1; i >= check; i--)
            {
                arr[row][i] = soNT[pos];
                pos++;
            }
            for (int i = row - 1; i > check; i--)
            {
                arr[i][check] = soNT[pos];
                pos++;
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