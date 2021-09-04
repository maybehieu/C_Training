#include <bits/stdc++.h>
using namespace std;
char s[1000];
void tokenize(char s[1000])
{
    const char cach[2] = " ";
    char *tu;
    tu = strtok(s, cach);
    while (tu != NULL)
    {
        for (int i = 0; i < strlen(tu); i++)
        {
            for (int i = 1; i < strlen(tu); i++)
            {
                if (tu[0] >= 97 && tu[0] <= 122)
                {
                    tu[0] = tu[0] - 32;
                }
            }
        }
        printf("%s", tu);
        tu = strtok(NULL, cach);
    }
    printf("\n");
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