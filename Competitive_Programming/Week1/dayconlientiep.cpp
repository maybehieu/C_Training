#include <bits/stdc++.h>
using namespace std;
long long arr[1000000];
long long n;
long long process(long long arr[1000000], long long size) 
{ 
    long long max_final = INT_MIN, max = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max = max + arr[i]; 
        if (max_final < max) 
            max_final = max; 
  
        if (max < 0) 
            max = 0; 
    } 
    return max_final; 
} 
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%lld", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        printf("%lld\n", process(arr, n));
    }
    
    return 0;
}