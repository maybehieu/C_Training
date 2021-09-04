#include <stdio.h>
#include <math.h>
#include <string.h>
#define pos 6
int check1(char bien[15])
{
    if (bien[6] < bien[7] && bien[7] < bien[8] && bien[8] < bien[10] && bien[10] < bien[11])
    {
        return 1;
    }
    return 0;
}
int check2(char bien[15])
{
    if (bien[6] == bien[7] && bien[7] == bien[8] && bien[10] == bien[11])
    {
        return 1;
    }
    return 0;
}
int check3(char bien[15])
{
    for (int i = pos; i < strlen(bien); i++)
    {
        if (bien[i] == '.')
        {
            continue;
        }
        if (bien[i] != '6' && bien[i] != '8')
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char bien[15] = {};
        gets(bien);
        if (check1(bien) || check2(bien) || check3(bien))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}