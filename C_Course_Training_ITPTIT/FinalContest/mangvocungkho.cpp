#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int arr2[10000];
int n;
void inmang(int arr[10000])
{
    int a = 0,b = n;
    for (int i = 0; i < n;)
    {
        arr2[a] = arr[i];
        a = a + 2;
        i = i + 2;
    }
    a = 1;
    for (int i = n - 1; i > 0;)
    {
        arr2[a] = arr[i];
        a = a + 2;
        i = i - 2;
    }
    
    
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        inmang(arr);
        for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

        
    }
    
    return 0;
}