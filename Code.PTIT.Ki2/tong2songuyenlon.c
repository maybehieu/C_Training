#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char a[1000], b[1000], xau1[1000] = {}, xau2[1000];
        int res[1005] = {};
        gets(a);
        gets(b);
        int length;
        if (strlen(a) > strlen(b))
        {
            for (int i = 0; i < strlen(a) - strlen(b); i++)
            {
                xau1[i] = '0';
            }
            strcat(xau1, b);
            length = strlen(a) - 1;
            strcpy(xau2, a);
        }
        else
        {
            for (int i = 0; i < strlen(b) - strlen(a); i++)
            {
                xau1[i] = '0';
            }
            strcat(xau1, a);
            length = strlen(b) - 1;
            strcpy(xau2, b);
        }
        int temp = 0, pos, d;
        for (int i = length; i >= 0; i--)
        {
            d = i + 1;
            res[d] += (xau1[i] - '0') + (xau2[i] - '0');
            if (res[d] >= 10)
            {
                res[d] -= 10;
                res[d - 1] += 1;
            }
            if (res[d] != 0)
            {
                pos = d;
                if (res[d - 1] != 0)
                {
                    pos = d - 1;
                }
            }
        }
        if (res[pos - 1] != 0)
        {
            pos--;
        }
        for (int i = pos; i <= length + 1; i++)
        {
            printf("%d", res[i]);
        }
        printf("\n");
    }

    return 0;
}