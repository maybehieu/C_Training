#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, arr[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[0])
        {
            printf("%d %d", arr[0], arr[i]);
            break;
        }
    }

    return 0;
}