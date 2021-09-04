#include <stdio.h>
#include <math.h>
#include <string.h>
int kiemtra(long long arr[5005], int n)
{
    for (int i = n - 1; i >= 2; i--)
    {
        int a = 0;
        int b = i - 1;
        while (a < b)
        {
            if (arr[a] + arr[b] == arr[i])
            {
                return 1;
            }
            if (arr[a] + arr[b] < arr[i])
            {
                a++;
            }
            else
            {
                b--;
            }
        }
    }
    return 0;
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n;
        long long arr[5005] = {};
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            arr[i] *= arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    long long temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        if (kiemtra(arr, n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}