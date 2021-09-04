#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        int vitri;
        char x,s1[1000],cach;
        char s2[1000];
        int dem = 0;
        gets(s1);
        scanf("%c ", &x);
        scanf("%d%c", &vitri, &cach);
        strcpy(s2, s1);
        for (int i = strlen(s1) + 1; i >= vitri; i--)
        {
            s1[i] = s2[i - 1];
        }
        s1[vitri] = x;
        puts(s1);
    }
}