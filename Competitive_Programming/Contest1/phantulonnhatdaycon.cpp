#include <bits/stdc++.h>
using namespace std;
int arr[100000], n, k;
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n - k + 1; i++)
        {
            int max = 0;
            for (int j = i; j < i + k; j++)
            {
                if (arr[j] > max)
                {
                    max = arr[j];
                }
            }
            printf("%d ", max);
        }
        printf("\n");
    }
    
    return 0;
}