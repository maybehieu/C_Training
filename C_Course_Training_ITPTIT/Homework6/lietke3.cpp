#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
char s1[1000],s2[1000],x;
int check[MAX],test = 0,test2 = 0,test3;
void demchu(char s2[1000], char s1[1000])
{
    // test = 0;
    for (int i = 0; i < strlen(s2); i++)
    {
        check[s2[i]]++;
    }
    for (int i = 0; i < strlen(s1); i++)
    {
        if (check[s1[i]] == 0)
        {
            
            printf("%c", s1[i]);
            check[s1[i]] = 1;
            test = 1;
        }
    }
}
void thoaman()
{
    if (test == 0)
    {
        printf("-1");
    }
}
void reset()
{
    for (int i = 0; i < MAX; i++)
    {
        check[i] = 0;
    }
}
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        gets(s1);
        gets(s2);
        demchu(s2,s1);
        reset();
        demchu(s1,s2);
        reset();
        thoaman();
        test = 0,test2 = 0;
        printf("\n");
    }
    
    return 0;
}