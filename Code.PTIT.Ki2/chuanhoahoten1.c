#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char tu[82];
        gets(tu);
        int check = 1;
        for (int i = 0; i < strlen(tu); i++)
        {
            if (tu[i] == ' ')
            {
                check = 1;
                continue;
            }
            if (check == 1)
            {
                if (tu[i] >= 97 && tu[i] <= 122)
                {
                    tu[i] = tu[i] - 32;
                }
                check = 0;
            }
            else
            {
                if (tu[i] < 97)
                {
                    tu[i] = tu[i] + 32;
                }
            }
        }
        check = 0;
        for (int i = 0; i < strlen(tu); i++)
        {
            if (tu[i] == ' ' && check == 1)
            {
                printf(" ");
                check = 0;
                continue;
            }
            else
            {
                if (tu[i] == ' ')
                {
                    continue;
                }
                printf("%c", tu[i]);
                check = 1;
            }
        }
        printf("\n");
    }

    return 0;
}