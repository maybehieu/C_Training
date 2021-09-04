#include <bits/stdc++.h>
using namespace std;
int a,b;
int tong(int &a, int &b)
{
    int tong;
    tong = a + b;
    return tong;
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", tong(a,b));
    }
    
    return 0;
}