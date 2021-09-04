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
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}