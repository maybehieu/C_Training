#include <stdio.h>
#include <math.h>
#include <string.h>
char s[1000], temp[1000];
int main()
{
    gets(s);
    int dem = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        temp[i] = s[i];
        dem++;
        if (s[i] == '\0')
        {
            for (int j = i + 1; j < strlen(s); j + dem)
            {
                if (s[j] == temp[i - 2] && s[j + 1] == temp[i - 1] && s[j + 2])
                {
                    /* code */
                }
            }
        }
    }

    return 0;
}