#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long long arr[105] = {}, min;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int j, pos;
        pos = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[pos])
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            long long temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }

        for (j = 0; j < n; j++)
        {
            printf("%lld ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}