#include <stdio.h>
#include <math.h>
#include <string.h>
typedef struct
{
    char ten[1000][55];
    int dem[1000];
} listTen;
listTen a;
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
    int test, soTen = 0;
    scanf("%d\n", &test);
    while (test--)
    {
        char ten[55] = {}, list[1000][50] = {};
        gets(ten);
        xoaKytu(ten);
        char temp[55];
        strcpy(temp, ten);
        int dem = 0;
        char *token = strtok(temp, " ");
        while (token != NULL)
        {
            token = strtok(NULL, " ");
            dem++;
        }
        int check = 1;
        for (int i = 0; i < strlen(ten); i++)
        {
            if (ten[i] == ' ')
            {
                continue;
            }
            if (ten[i] < 97)
            {
                ten[i] = ten[i] + 32;
            }
        }
        int check2 = 0, pos = 0;
        check = 1;
        for (int i = 0; i < strlen(ten); i++)
        {
            if (ten[i] == ' ')
            {
                check2++;
            }
            if (check2 == dem - 1)
            {
                for (int j = i + 1; j < strlen(ten); j++)
                {
                    // printf("%c", ten[j]);
                    a.ten[soTen][pos] = ten[j];
                    list[soTen][pos] = ten[j];
                    pos++;
                }
                int x = 0;
                for (int j = 0; j < strlen(ten); j++)
                {
                    if (check == 1)
                    {
                        // printf("%c", ten[j]);
                        a.ten[soTen][pos] = ten[j];
                        list[soTen][pos] = ten[j];
                        pos++;
                        check = 0;
                        continue;
                    }
                    if (ten[j] == ' ')
                    {
                        x++;
                        check = 1;
                    }
                    if (ten[j] == ' ' && x == dem - 2)
                    {
                        // printf("%c@ptit.edu.vn\n", ten[j + 1]);
                        a.ten[soTen][pos] = ten[j + 1];
                        list[soTen][pos] = ten[j + 1];
                        break;
                    }
                }
                soTen++;
                pos = 0;
                break;
            }
        }
        int dem3 = 0, check3 = 1;
        for (int i = 0; i < soTen; i++)
        {
            if (strcmp(list[soTen - 1], a.ten[i]) == 0)
            {
                dem3++;
            }
        }
        if (dem3 == 1)
        {
            printf("%s@ptit.edu.vn\n", list[soTen - 1]);
        }
        else
        {
            printf("%s%d@ptit.edu.vn\n", list[soTen - 1], dem3);
        }
    }

    return 0;
}