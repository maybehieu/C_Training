#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, arr[100000] = {}, minArr[] = {99999999}, minDem[2] = {}, dem = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        mergeSort(arr, 0, n - 1);
        int min = 99999999;
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] - arr[i - 1] < min)
            {
                min = arr[i] - arr[i - 1];
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] - arr[i - 1] == min)
            {
                dem++;
            }
        }
        printf("%d %d\n", min, dem);
    }

    return 0;
}