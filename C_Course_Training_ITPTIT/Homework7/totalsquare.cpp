#include <bits/stdc++.h>
using namespace std;
int n,arr[100000];
long long totalSquare(int arr[10000])
{
    long long tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            tong += arr[i] * arr[i];
        }
    }
    return tong;
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%lld", totalSquare(arr));
    return 0;
}