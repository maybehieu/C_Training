#include <bits/stdc++.h>
using namespace std;
int n;
long long arr[1000000];
void xoaphantu(long long arr[1000000])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            printf("%lld ", arr[i]);
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
    xoaphantu(arr);
    return 0;
}