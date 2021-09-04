#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[1000], danhdau1[100], danhdau2[100];
int main()
{
    int n, dem = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        danhdau1[arr[i]]++;
        danhdau2[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (danhdau1[arr[i]] != 1)
        {
            dem++;
            danhdau1[arr[i]] = 1;
        }
    }
    printf("%d\n", dem);
    for (int i = 0; i < n; i++)
    {
        if (danhdau2[arr[i]] != 1)
        {
            printf("%d ", arr[i]);
            danhdau2[arr[i]] = 1;
        }
    }
    return 0;
}