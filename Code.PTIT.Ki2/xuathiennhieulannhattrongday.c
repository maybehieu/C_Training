#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int arr[100] = {}, danhdau[30000] = {}, n, max = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            danhdau[arr[i]]++;
            if (danhdau[arr[i]] > max)
            {
                max = danhdau[arr[i]];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (danhdau[arr[i]] == max)
            {
                printf("%d ", arr[i]);
                danhdau[arr[i]]--;
            }
        }
        printf("\n");
    }

    return 0;
}