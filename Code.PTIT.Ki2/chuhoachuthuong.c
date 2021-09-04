#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        char s[2];
        gets(s);
        if (s[0] >= 65 && s[0] <= 90)
        {
            s[0] = s[0] + 32;
            printf("%c\n", s[0]);
        }
        else
        {
            s[0] = s[0] - 32;
            printf("%c\n", s[0]);
        }
    }

    return 0;
}