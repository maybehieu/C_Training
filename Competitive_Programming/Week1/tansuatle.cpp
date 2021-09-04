#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
int danhdau[1000000];
int n,xuathien = 0,stt = 0;
void reset()
{
    xuathien = 0, stt = 0;
    for (int i = 0; i < 1000000; i++)
    {
        arr[i] = 0;
        danhdau[i] = 0;
    }
}
void locmang()
{
    for (int i = 0; i < n; i++)
    {
        danhdau[arr[i]]++;
    }
}
int kiemtra()
{
    for (int i = 0; i < n; i++)
    {
        if (danhdau[i] % 2 != 0)
        {
            return i;
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
        reset();
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        locmang();
        printf("%d\n", kiemtra());
    }
    
    return 0;
}