#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[1000][10];
int main()
{
    int bo, test = 1;
    scanf("%d", &bo);
    while (bo--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Test %d:\n", test);
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        test++;
    }

    return 0;
}