#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        char s[1000];
        int dem = 1;
        gets(s);
        for (int i = 0; i < strlen(s); i++)
        {   
            if (s[i] == -1)
            {
                continue;
            }
            for (int j = i + 1; j < strlen(s); j++)
            {
                if (s[i] == s[j])
                {
                    dem++;
                    s[j] = -1;
                }
                else if (s[i] != s[j])
                {
                    break;
                }
            }
            if (dem == 1)
            {
                printf("%c", s[i]);
            }
            else if (dem != 1)
            {
                printf("%c%d", s[i], dem);
                dem = 1;
                s[i] = -1;
            }
        }
        printf("\n"); 
    }
}