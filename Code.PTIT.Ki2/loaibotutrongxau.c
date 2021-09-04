#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char s[1000], tu[1000];
    gets(s);
    gets(tu);
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] == tu[0]) && s[i + strlen(tu) - 1] == tu[strlen(tu) - 1])
        {
            int j;
            for (j = i; j < strlen(s); j++)
            {
                s[j] = s[j + strlen(tu)];
                int temp = j;
            }
            s[j + strlen(tu)] = '\0';
        }
    }
    printf("%s", s);
    return 0;
}