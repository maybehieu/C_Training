#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[1000], danhdau[100];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        danhdau[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (danhdau[arr[i]] != 1)
        {
            printf("%d ", arr[i]);
            danhdau[arr[i]] = 1;
        }
    }
    return 0;
}