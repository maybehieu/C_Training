#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bo;
    char s[1000];
    char x;
    scanf("%d\n", &bo);
    while (bo--)
    {
        scanf("%c ", &x);
        gets(s);
        
        int dem = 0;
        // strcmp(s[i], x);
        for (int i = 0;s[i] != '\0'; i++)
        {
            if (s[i] == x)
            {
                dem++;
            }
            
        }
        printf("%d\n", dem);
    }
}