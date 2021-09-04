#include <bits/stdc++.h>
using namespace std;
int n;
long long arr[1000000], danhdau[1000000];
int vitri[1000000];
void locmang()
{
    for (int i = 0; i < 1000000; i++)
    {
        danhdau[arr[i]]++;
    }
}
void xuathien()
{
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        a++;
        if (vitri[arr[i]] != 0)
        {
            a--;
            continue;
        }
        vitri[arr[i]] = a;
    }
}
void inmang()
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (danhdau[arr[i]] > max)
        {
            
        }
            
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
            scanf("%lld", &arr[i]);
        }
        locmang();
        xuathien();
        inmang();
        
    }
    
    return 0;
}