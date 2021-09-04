#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[52];
    gets(s);
    int pos, check = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (check == 1 && s[i] != ' ')
        {
            if (s[i] < 97)
            {
                s[i] += 32;
            }
            printf("%c", s[i]);
            check = 0;
            pos = i + 1;
        }
        if (s[i] == ' ')
        {
            check = 1;
        }
    }
    for (int i = pos; i < strlen(s); i++)
    {
        if (s[i] < 97)
        {
            s[i] += 32;
        }
        printf("%c", s[i]);
    }
    printf("@ptit.edu.vn");

    return 0;
}