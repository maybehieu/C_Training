#include <bits/stdc++.h>
using namespace std;
char s[1000];
void tokenize(char s[1000])
{
    const char cach[2] = " ";
    char *tu;
    tu = strtok(s, cach);
    int dem = 0;
    while (tu != NULL)
    {
        dem++;
        tu = strtok(NULL, cach);
    }
    printf("%d\n", dem);
}
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        gets(s);
        tokenize(s);
    }
    return 0;
}