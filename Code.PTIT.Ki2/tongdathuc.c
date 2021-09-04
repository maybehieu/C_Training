#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    int heSo[10005];
} DaThuc;

int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char a[10000], b[10000];
        gets(a);
        gets(b);
        DaThuc n = {};
        int max = 0, dem = 0;
        for (int i = 0; i < strlen(a); i++)
        {
            int temp = 0, mu = 0;
            dem++;
            if (a[i + 1] == '*')
            {
                for (int j = i + 1 - dem; a[j] != '*'; j++)
                {
                    temp *= 10;
                    temp += a[j] - '0';
                }
                int j, check = 0;
                for (j = i + 4; a[j] != ' ' && j < strlen(a); j++)
                {
                    mu *= 10;
                    if (a[j] == '0' && check == 0)
                    {
                        mu = 0;
                        break;
                    }
                    mu += a[j] - '0';
                    check = 1;
                }
                n.heSo[mu] += temp;
                if (mu > max)
                {
                    max = mu;
                }
                i = j + 2;
                dem = 0;
            }
        }
        for (int i = 0; i < strlen(b); i++)
        {
            int temp = 0, mu = 0;
            dem++;
            if (b[i + 1] == '*')
            {
                for (int j = i + 1 - dem; b[j] != '*'; j++)
                {
                    temp *= 10;
                    temp += b[j] - '0';
                }
                int j, check = 0;
                for (j = i + 4; b[j] != ' ' && j < strlen(b); j++)
                {
                    mu *= 10;
                    if (b[j] == '0' && check == 0)
                    {
                        mu = 0;
                        break;
                    }
                    mu += b[j] - '0';
                    check = 1;
                }
                n.heSo[mu] += temp;
                if (mu > max)
                {
                    max = mu;
                }
                i = j + 2;
                dem = 0;
            }
        }
        for (int i = max; i >= 0; i--)
        {
            if (n.heSo[i] != 0)
            {
                printf("%d*x^%d", n.heSo[i], i);
                if (i != 0)
                {
                    printf(" + ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}