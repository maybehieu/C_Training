#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void cong(char a[], char b[])
{
    char xau1[2000] = {}, xau2[2000] = {};
    int res[2005] = {};
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
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char a[2000], b[2000], xau1[2000] = {}, xau2[2000] = {};
        int res[2005] = {};
        gets(a);
        gets(b);
        int check = 1;
        if (a[0] == '-' && b[0] == '-')
        {
            check = 0;
            int n = strlen(a);
            for (int i = 0; i < n; i++)
            {
                a[i] = a[i + 1];
            }
            a[n - 1] = '\000';
            n = strlen(b);
            for (int i = 0; i < n; i++)
            {
                b[i] = b[i + 1];
            }
            b[n - 1] = '\000';
        }
        if (a[0] == '-' && check == 1)
        {
            int n = strlen(a);
            for (int i = 0; i < n; i++)
            {
                a[i] = a[i + 1];
            }
            a[n - 1] = '\000';
            // puts(a);
            // puts(b);
            cong(a, b);
            continue;
        }
        else if (b[0] == '-' && check == 1)
        {
            int n = strlen(b);
            for (int i = 0; i < n; i++)
            {
                b[i] = b[i + 1];
            }
            b[n - 1] = '\000';
            cong(a, b);
            continue;
        }
        int length;
        if (strlen(a) > strlen(b))
        {
            for (int i = 0; i < strlen(a) - strlen(b); i++)
            {
                xau2[i] = '0';
            }
            strcat(xau2, b);
            length = strlen(a) - 1;
            strcpy(xau1, a);
        }
        else if (strlen(b) > strlen(a))
        {
            for (int i = 0; i < strlen(b) - strlen(a); i++)
            {
                xau2[i] = '0';
            }
            strcat(xau2, a);
            length = strlen(b) - 1;
            strcpy(xau1, b);
        }
        else
        {
            length = strlen(a) - 1;
            if (strcmp(a, b) == 0)
            {
                printf("0\n");
                continue;
            }
            for (int i = 0; i < strlen(a); i++)
            {

                if (a[i] > b[i])
                {
                    strcpy(xau1, a);
                    strcpy(xau2, b);
                    break;
                }
                else if (b[i] > a[i])
                {
                    strcpy(xau1, b);
                    strcpy(xau2, a);
                    break;
                }
            }
        }
        int temp = 0, pos, d;
        for (int i = length; i >= 0; i--)
        {
            d = i;
            res[d] += (xau1[i] - '0') - (xau2[i] - '0');
            if (res[d] < 0)
            {
                res[d] += 10;
                res[d - 1] -= 1;
            }
            if (res[d] != 0)
            {
                pos = d;
                if (res[d + 1] != 0 && res[d] == 0)
                {
                    pos = d + 1;
                }
            }
        }
        for (int i = pos; i <= length; i++)
        {
            printf("%d", res[i]);
        }
        printf("\n");
    }

    return 0;
}