#include <stdio.h>
#include <math.h>
#include <string.h>
void lwr(char tu[])
{
    for (int i = 0; i < strlen(tu); i++)
    {
        if (tu[i] >= 'A' && tu[i] <= 'Z')
        {
            tu[i] += 32;
        }
    }
}
int main()
{
    char xau[10000], tu[100][100] = {}; //tu là mảng có [a] dòng, 1 dòng có tối đa [b] ký tự
    int dem[100] = {}, n = 0, k = 0;
    gets(xau);
    char *token = strtok(xau, " ");
    while (token != NULL)
    {
        strcpy(tu[n], token);
        token = strtok(NULL, " ");
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        lwr(tu[i]);
        dem[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dem[j] != 0)
            {
                if (strcmp(tu[i], tu[j]) == 0)
                {
                    dem[j] = 0;
                    dem[i]++;
                }
            }
        }
        if (dem[i] != 0)
        {
            printf("%s %d\n", tu[i], dem[i]);
            dem[i] = 0;
        }
    }

    return 0;
}