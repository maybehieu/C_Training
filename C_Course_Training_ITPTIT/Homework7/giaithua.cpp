#include <bits/stdc++.h>
using namespace std;
long long ketqua = 1;
long long giaithua(int n)
{
    for (int i = 1; i <= n; i++)
    {
        ketqua = ketqua * i;
    }
    // printf("%lld", ketqua);
    return ketqua;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld",giaithua(n));
    // giaithua(n);
    return 0;
}