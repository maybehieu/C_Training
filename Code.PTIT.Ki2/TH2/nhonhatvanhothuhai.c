#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, arr[100] = {}, min1 = 99999999, min2 = 99999999;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min1)
        {
            min1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }

    printf("%d %d", min1, min2);
    return 0;
}