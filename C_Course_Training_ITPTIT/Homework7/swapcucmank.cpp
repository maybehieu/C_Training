#include <bits/stdc++.h>
using namespace std;
int a,b;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d%d", &a, &b);
        swap(a, b);
        printf("%d %d\n", a, b);
    }
    return 0;
}