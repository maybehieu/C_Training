#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, arr[1000];
        scanf("%d", &n);
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        printf("%d\n", max);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}