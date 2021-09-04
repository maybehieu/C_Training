#include <stdio.h>
#include <math.h>
#include <string.h>

char s[1000];
void tokenize(char s[1000])
{
    const char cach[2] = " ";
    char *tu;
    tu = strtok(s, cach);
    int dem = 0;
    while (tu != NULL)
    {
        printf("%s\n", tu);
        tu = strtok(NULL, cach);
    }
}
int main()
{
    gets(s);
    tokenize(s);
    return 0;
}