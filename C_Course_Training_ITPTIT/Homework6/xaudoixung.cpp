#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bo;
    char s[2000];
    scanf("%d\n", &bo);
    while (bo--)
    {
        gets(s);
        string s1;
        for (int i = strlen(s) - 1; i >=0 ; i--)
        {
            s1 = s1 + s[i];
        }
        if (s1 == s)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
}