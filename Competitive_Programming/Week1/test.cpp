#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
int n,xuathien = 0,stt = 0;
int danhdau[1000000];
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
void kiemtra()
{
    for (int i = 0; i < 1000000; i++)
    { 
        if (danhdau[i] > xuathien)
        {
            xuathien = danhdau[i];
            stt = i;
        }
    }
    if (xuathien > n / 2)
    {
        printf("%d\n", stt);
    }
    else
    {
        printf("NO");
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
        kiemtra();
    }
    return 0;
}