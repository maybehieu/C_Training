#include <stdio.h>
#include <math.h>
#include <string.h>
int conV(char s)
{
    if (s == 'I')
    {
        return 1;
    }
    if (s == 'V')
    {
        return 5;
    }
    if (s == 'I')
    {
        return 1;
    }
    if (s == 'X')
    {
        return 10;
    }
    if (s == 'L')
    {
        return 50;
    }
    if (s == 'C')
    {
        return 100;
    }
    if (s == 'D')
    {
        return 500;
    }
    if (s == 'M')
    {
        return 1000;
    }
}
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char so[1005] = {};
        long long lama = 0;
        gets(so);
        for (int i = 0; so[i] != '\000'; i++)
        {
            if (conV(so[i]) < conV(so[i + 1]))
            {
                lama -= conV(so[i]);
            }
            else
            {
                lama += conV(so[i]);
            }
        }
        printf("%lld\n", lama);
    }

    return 0;
}