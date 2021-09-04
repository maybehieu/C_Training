#include <bits/stdc++.h>
using namespace std;
char s[1000];
void tokenize(char s[1000])
{
    const char cach[2] = " ";
    char *tu;
    char cum[1000];
    char chucaidau[1000];
    tu = strtok(s, cach);
    while (tu != NULL)
    {
        int dem = -1;
        for (int i = 0; i < strlen(tu); i++)
        {
            if (tu[i] < 97)
            {
                tu[i] = tu[i] + 32;
            }
            chucaidau[dem++] = tu[0];
        }
        tu = strtok(NULL, cach);
    }
}
void inemail()
{
    
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        gets(s);

    }
    
}