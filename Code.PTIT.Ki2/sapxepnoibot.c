#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, arr[105] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int buoc = 1, tempN = n, swap = 0;
    for (int i = 0; i < tempN - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap = 1;
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        if (i == tempN - 2 && swap == 1)
        {
            printf("Buoc %d: ", buoc);
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[j]);
            }
            printf("\n");
            buoc++;
            i = -1;
            tempN--;
            swap = 0;
        }
    }

    return 0;
}