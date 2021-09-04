#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[10000000];
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n;
        scanf("%d", &n);
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (i >= 1)
            {
                if (arr[i] == arr[i - 1])
                {
                    dem++;
                }
            }
        }
        printf("%d\n", dem);
    }

    return 0;
}