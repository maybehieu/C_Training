#include <bits/stdc++.h>
using namespace std;
long long n,tong;
long long tinhtong(long long n)
{
    tong = n * (2 + (n - 1)) / 2;
    return tong;
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%lld", &n);
        printf("%lld\n", tinhtong(n));
    }
    return 0;
}