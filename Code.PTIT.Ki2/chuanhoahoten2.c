#include <stdio.h>
#include <math.h>
#include <string.h>
void xoa(char ten[55], int vitri)
{
    int n = strlen(ten);
    for (int i = vitri; i < n; i++)
    {
        ten[i] = ten[i + 1];
    }
    ten[n - 1] = '\0';
}
void xoaKytu(char *ten)
{
    for (int i = 0; i < strlen(ten); i++)
    {
        if (ten[i] == ' ' && ten[i + 1] == ' ')
        {
            xoa(ten, i);
            i--;
        }
    }
    if (ten[0] == ' ')
    {
        xoa(ten, 0);
    }
    if (ten[strlen(ten) - 1] == ' ')
    {
        xoa(ten, strlen(ten) - 1);
    }
}
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char ten[55] = {};
        gets(ten);
        xoaKytu(ten);
        int check = 1;
        for (int i = 0; i < strlen(ten); i++)
        {
            if (ten[i] == ' ')
            {
                check = 1;
                continue;
            }
            if (check == 1)
            {
                if (ten[i] >= 97 && ten[i] <= 122)
                {
                    ten[i] = ten[i] - 32;
                }
                check = 0;
            }
            else
            {
                if (ten[i] < 97)
                {
                    ten[i] = ten[i] + 32;
                }
            }
        }
        for (int i = 0; i < strlen(ten); i++)
        {
            if (ten[i] == ' ')
            {
                for (int j = i + 1; j < strlen(ten); j++)
                {
                    printf("%c", ten[j]);
                }
                printf(", ");
                for (int j = 0; j < strlen(ten); j++)
                {
                    if (ten[j] == ' ')
                    {
                        break;
                    }
                    if (ten[j] >= 97 && ten[j] <= 122)
                    {
                        ten[j] = ten[j] - 32;
                    }
                    printf("%c", ten[j]);
                }
                printf("\n");
                break;
            }
        }
    }

    return 0;
}