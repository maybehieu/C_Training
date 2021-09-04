#include <stdio.h>
#include <math.h>
#include <string.h>
long long arr1[1000], arr2[1000];
int main()
{
    int bo, test = 1;
    scanf("%d", &bo);
    while (bo--)
    {
        int m, n, vitri;
        scanf("%d %d %d", &m, &n, &vitri);
        for (int i = 0; i < m; i++)
        {
            scanf("%lld", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr2[i]);
        }
        printf("Test %d:\n", test);
        for (int i = 0; i < vitri; i++)
        {
            printf("%d ", arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr2[i]);
        }
        for (int i = vitri; i < m; i++)
        {
            printf("%d ", arr1[i]);
        }
        printf("\n");
        test++;
    }

    return 0;
}