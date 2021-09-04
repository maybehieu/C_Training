#include <bits/stdc++.h>
using namespace std;
char s[1000];
void xoakytu(char x)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (x == s[i])
        {
            continue;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        char x,enter;
        gets(s);
        scanf("%c%c", &x, &enter);
        xoakytu(x);
    }
    
}