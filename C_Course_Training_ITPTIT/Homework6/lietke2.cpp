#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        char s[1000];
        gets(s);
        int check = 0,dem = 1;
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
                    check = 1;
                }
            }
            if (dem != 1)
            {
                printf("%c   %d\n", s[i], dem);
                dem = 1;
                s[i] = -1;
            }
        }
        if (check == 0)
        {
            printf("-1\n");
        }
    }
}