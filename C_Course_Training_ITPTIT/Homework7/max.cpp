#include <bits/stdc++.h>
using namespace std;
long long arr[1000000];
int n;
long long timmax(long long arr[1000000])
{
    long long max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    printf("%lld", timmax(arr));
    return 0;
}