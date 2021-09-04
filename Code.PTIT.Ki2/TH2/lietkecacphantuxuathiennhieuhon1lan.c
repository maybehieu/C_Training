#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, arr[100] = {}, danhdau[15] = {}, danhdau2[15] = {}, dem = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        danhdau[arr[i]]++;
        danhdau2[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (danhdau2[arr[i]] > 1)
        {
            dem++;
            danhdau2[arr[i]] = 1;
        }
    }

    printf("%d\n", dem);
    for (int i = 0; i < n; i++)
    {
        if (danhdau[arr[i]] > 1)
        {
            printf("%d ", arr[i]);
            danhdau[arr[i]] = 1;
        }
    }

    return 0;
}