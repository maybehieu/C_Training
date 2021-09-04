#include <bits/stdc++.h>
using namespace std;
long long arr[1000000];
int n;
void timmin(long long arr[1000000])
{
    long long min = 9999999999999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            printf("%d ", i + 1);
        }
    }
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    timmin(arr);
    return 0;
}