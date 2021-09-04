#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char xau[8000][100];
    int dem[8000];
    int length[8000];
    int pro[8000];
    int max;
} ThuanNghich;
ThuanNghich a;
int checkTN(char s[])
{
    for (int i = 0; i <= strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
void in(ThuanNghich *a, int *pos)
{
    int temp = 0;

    while (scanf("%s", &(a->xau[temp])) == 1) //chịu luôn
    {
        temp++;
    }
    *pos = temp;

    // for (int i = 0; i < 6; i++) //chạy đc ide, ideone chịu
    // {
    //     scanf("%s", &(a->xau[i]));
    // }
    // *pos = 6;
}

void process(ThuanNghich *a, int n)
{
    char s[100];
    for (int i = 0; i < n; i++)
    {
        strcpy(s, a->xau[i]);
        if (checkTN(s))
        {
            a->length[i] = strlen(s);
            if (strlen(s) > a->max)
            {
                a->max = strlen(s);
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a->length[i] == a->max && a->pro[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(a->xau[i], a->xau[j]) == 0)
                {
                    a->dem[i]++;
                    a->pro[j] = 1;
                }
            }
        }
    }
}
void out(ThuanNghich a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a.length[i] == a.max && a.pro[i] != 1)
        {
            printf("%s %d\n", a.xau[i], a.dem[i] + 1);
        }
    }
}
void test(ThuanNghich a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a.xau[i]);
    }
}
int main()
{
    int pos = 0;
    a.max = 0;
    in(&a, &pos);
    process(&a, pos);
    out(a, pos);
    return 0;
}