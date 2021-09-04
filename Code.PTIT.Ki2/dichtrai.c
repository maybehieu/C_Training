#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, arr[1000], vitri;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &vitri);
    for (int i = vitri; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < vitri; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}