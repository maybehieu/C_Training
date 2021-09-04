#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int m, n, arr1[1000], arr2[1000], vitri;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    scanf("%d", &vitri);
    int temp = vitri;
    for (int i = temp; i < m; i++)
    {
        arr1[temp + n] = arr1[temp];
        temp++;
    }
    for (int i = 0; i < n; i++)
    {
        arr1[vitri] = arr2[i];
        vitri++;
    }
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}