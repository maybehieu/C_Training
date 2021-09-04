#include <bits/stdc++.h>
using namespace std;
char s[1000];
void checkmang(char s[1000])
{
    int thuong = 0, hoa = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            thuong++;
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {
            hoa++;
        }
    }
    if (hoa > thuong)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] = s[i] - 32;    
            }
        }
    }
    else if (thuong >= hoa)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;    
            }
        }
    }
}
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        gets(s);
        checkmang(s);
        puts(s);
    }
    
    return 0;
}