#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[10000];
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, check = 1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                printf("NO\n");
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            printf("YES\n");
        }
    }

    return 0;
}