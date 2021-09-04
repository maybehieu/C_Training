#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int n;
char s1[200], s2[200], res[400];
int check(char s1[], char s2[], char res[])
{
    char temp[505] = {}, sta[505] = {};
    int check = 1, dem = 0;
    while (1)
    {
        int pos = 0;
        if (strlen(s1) > strlen(s2))
        {
            for (int i = 0; i < strlen(s2); i++)
            {
                temp[pos] = s2[i];
                temp[++pos] = s1[i];
                pos++;
            }
            for (int i = strlen(s1) - strlen(s2) + 1; i < strlen(s1); i++)
            {
                temp[pos] = s1[i];
                pos++;
            }
        }
        else if (strlen(s1) < strlen(s2))
        {
            for (int i = 0; i < strlen(s1); i++)
            {
                temp[pos] = s2[i];
                temp[++pos] = s1[i];
                pos++;
            }
            for (int i = strlen(s2) - strlen(s1) + 1; i < strlen(s2); i++)
            {
                temp[pos] = s2[i];
                pos++;
            }
        }
        else
        {
            for (int i = 0; i < strlen(s2); i++)
            {
                temp[pos] = s2[i];
                temp[++pos] = s1[i];
                pos++;
            }
        }
        // puts(temp);
        // puts(s1);
        // puts(s2);
        // printf("\n");
        if (check == 1)
        {
            strcpy(sta, temp);
            check = 0;
        }
        // puts(sta);
        if (strcmp(temp, res) == 0)
        {
            return dem + 1;
        }
        if (strcmp(temp, sta) == 0 && dem > 0)
        {
            return -1;
        }
        // printf("%d\n", strlen(temp));
        for (int i = 0; i < strlen(temp) / 2; i++)
        {
            s1[i] = temp[i];
            s2[i] = temp[strlen(temp) - i - 1];
        }
        int length = strlen(temp);
        for (int i = 0; i < length / 2; i++)
        {
            s1[i] = temp[i];
            // s2[i] = temp[strlen(temp) - i - 1];
        }
        int j = 0;
        for (int i = length / 2; i < length; i++)
        {
            s2[j] = temp[i];
            j++;
        }

        dem++;
        // puts(s1);
        // puts(s2);
        // puts(temp);
    }
}
int main()
{
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        scanf("%s%s%s", &s1, &s2, &res);
        printf("%d\n", check(s1, s2, res));
    }
}