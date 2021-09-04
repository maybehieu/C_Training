#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int n, arr1[101], arr2[101];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        printf("Test %d:\n", a);
        qsort(arr1, n, sizeof(int), compare);
        qsort(arr2, n, sizeof(int), compare);
        for (int i = 0; i < n; i++)
        {
            printf("%d %d ", arr1[i], arr2[n - i - 1]);
        }
        printf("\n");
    }

    return 0;
}