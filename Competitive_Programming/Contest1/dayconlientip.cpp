#include <bits/stdc++.h>
using namespace std;
int n, tong, arr[100000];
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d %d", &n, &tong);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int sum = 0;
            sum += arr[i];
            if (sum == tong)
            {
                printf("YES\n");
                break;
            }
            for (int j = i + 1; j < n; j++)
            {
                sum += arr[j];
                if (sum == tong)
                {
                    /* code */
                }
                
            }
            
        }
        
    }
    
    return 0;
}