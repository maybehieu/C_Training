#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int main()
{
    int max = 0;
    int dem[1000];
    char xau[1000];
    gets(xau);
    dem[0] = 1;
    for (int i = 1; i < strlen(xau); i++)
    {
        dem[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (xau[j] < xau[i])
            {
                dem[i] = Max(dem[j] + 1, dem[i]);
            }
        }
        max = Max(dem[i], max);
    }
    printf("%d", 26 - max);
    return 0;
}