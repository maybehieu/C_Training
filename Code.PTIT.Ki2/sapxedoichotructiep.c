#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, arr[100], dem = 0, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        dem++;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
        printf("Buoc %d: ", dem);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}