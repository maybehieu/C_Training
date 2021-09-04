#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[10000], danhdau[100];
int main()
{
    int n, dem = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        danhdau[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (danhdau[arr[i]] == 1)
        {
            dem++;
        }
    }
    printf("%d\n", dem);
    for (int i = 0; i < n; i++)
    {
        if (danhdau[arr[i]] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}