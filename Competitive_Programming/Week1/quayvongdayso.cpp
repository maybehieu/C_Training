#include <bits/stdc++.h>
using namespace std;
int n, so, arr[1000000], temp[1000000];
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d %d", &n, &so);
        for (int i = 0; i < so; i++)
        {
            scanf("%d", &temp[i]);
        }
        for (int i = 0; i < n - so; i++)
        {
            scanf("%d", &arr[i]);
            printf("%d ", arr[i]);
        }
        for (int i = 0; i < so; i++)
        {
            printf("%d ", temp[i]);
        }
        printf("\n");
        
    }
    
    return 0;
}