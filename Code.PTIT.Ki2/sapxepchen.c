#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[101] = {}, arr1[101] = {}, min = 999999, pos;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {

        int cur = arr[i];
        int k = i;
        while (k > 0 && arr[k - 1] > cur)
        {
            arr[k] = arr[k - 1];
            k--;
        }
        arr[k] = cur;
        printf("Buoc %d: ", i);
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}