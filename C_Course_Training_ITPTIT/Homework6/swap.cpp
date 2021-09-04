#include <bits/stdc++.h>
using namespace std;
void swap(long long* vitri1, long long* vitri2)
{
    long long tmp;
    tmp = *vitri1;
    *vitri1 = *vitri2;
    *vitri2 = tmp;
}
int main()
{
    long long m,n;
    scanf("%lld%lld",&m, &n);
    swap(&m, &n);
    printf("%lld %lld", m, n);
}