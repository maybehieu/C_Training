#include <stdio.h>
#include <math.h>
#include <string.h>
int danhdau[100];
int main()
{
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        danhdau[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (danhdau[arr[i]] != 0)
        {
            printf("%d %d\n", arr[i], danhdau[arr[i]]);
            danhdau[arr[i]] = 0;
        }
    }
    return 0;
}