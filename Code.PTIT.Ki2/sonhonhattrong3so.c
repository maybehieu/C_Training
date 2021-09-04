#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int arr[3], min = 99999999;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}