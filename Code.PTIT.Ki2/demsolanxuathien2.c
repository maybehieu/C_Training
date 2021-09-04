#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[1000], danhdau[1000];
int main()
{
    int bo, test = 1;
    scanf("%d", &bo);
    while (bo--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            danhdau[arr[i]]++;
        }
        printf("Test %d:\n", test);
        for (int i = 0; i < n; i++)
        {
            if (danhdau[arr[i]] != 0)
            {
                printf("%d xuat hien %d lan\n", arr[i], danhdau[arr[i]]);
                danhdau[arr[i]] = 0;
            }
        }
        test++;
    }

    return 0;
}