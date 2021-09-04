#include <bits/stdc++.h>
using namespace std;
char s1[1000],s2[1000],*eptr;
long long num,tong;
long long sochuso(char s1[1000])
{
    return strlen(s1);
}
long long convert(char s1[1000])
{
    return strtoll(s1, &eptr, 19);
}
void reset()
{
    tong = 0;
}
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        gets(s1);
        gets(s2);
        // sochuso(s1);
        // printf("%lld\n", convert(s1));
        tong = convert(s1) + convert(s2);
        printf("%lld\n", tong);
        reset();
    }
}