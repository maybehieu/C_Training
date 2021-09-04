#include <bits/stdc++.h>
using namespace std;
int n, arr[100000];
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d", &n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        int temp = 0, check = 0;
        for (int i = 1; i < n - 1; i++)
        {
            temp += arr[i - 1];
            if (temp == sum - temp - arr[i])
            {
                printf("%d\n", i + 1);
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            printf("-1\n");
        }
        
    }
    
    return 0;
}