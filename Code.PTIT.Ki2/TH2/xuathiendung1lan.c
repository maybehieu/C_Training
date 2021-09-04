#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, arr[100] = {}, danhdau[15] = {}, dem = 0;
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