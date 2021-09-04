#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(long long n)
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
    int n, arr[100][100] = {}, hang[100] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isPrime(arr[i][j]))
            {
                dem++;
            }
        }
        hang[i] = dem;
        dem = 0;
    }
    int max = 0, vitri;
    for (int i = 0; i < n; i++)
    {
        if (hang[i] > max)
        {
            max = hang[i];
            vitri = i;
        }
    }
    printf("%d\n", vitri + 1);
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[vitri][i]))
        {
            printf("%d ", arr[vitri][i]);
        }
    }

    return 0;
}