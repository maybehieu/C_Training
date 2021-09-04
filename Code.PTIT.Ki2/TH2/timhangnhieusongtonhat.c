#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
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
    int n, arr[100][100] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int dem = 0, hangPos;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (isPrime(arr[i][j]))
            {
                temp++;
            }
        }
        if (temp > dem)
        {
            dem = temp;
            hangPos = i;
        }
    }
    printf("%d\n", hangPos + 1);
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[hangPos][i]))
        {
            printf("%d ", arr[hangPos][i]);
        }
    }

    return 0;
}