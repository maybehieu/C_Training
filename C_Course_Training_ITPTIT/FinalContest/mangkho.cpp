#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n,a,arr[100000],arr2[100000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        // if (n % 2 == 0)
        // {
            a = 0;
            for (int i = 0; i < n;)
            {
                arr2[a] = arr[i];
                i = i + 1;
                a = a + 2;
            }
            a = 1;
            for (int i = n - 1; i > 0;)
            {
                arr2[a] = arr[i];
                i = i - 1;
                a = a + 2; 
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr2[i]);
            }
            printf("\n");
        // }
        
        
        
    }
    
    return 0;
}