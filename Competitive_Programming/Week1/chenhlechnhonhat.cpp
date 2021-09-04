#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, arr[100000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n, greater<int>());
        int min = INT_MAX;
        int check = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] - arr[i + 1] < min && arr[i] - arr[i + 1] >= 0)
            {
                min = arr[i] - arr[i + 1];
                if (min == 0)
                {
                    printf("0\n");
                    check = 1;
                    break;
                }
            }    
        }
        if (check == 0)
        {
            printf("%d\n", min);
        }
        
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
        
    }
    
    return 0;
}