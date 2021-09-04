#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    int stt[100];
    char maSV[100][100];
    char name[100][100];
    char dateob[100][100];
} SinhVien;
int lastPos = 1;
void opt1(int n, SinhVien *a)
{
    int i;
    for (i = lastPos; i <= n; i++)
    {
        scanf("\n");
        a->stt[i] = i;
        gets(a->maSV[i]);
        gets(a->name[i]);
        gets(a->dateob[i]);
    }
    lastPos = i;
    printf("%d\n", n);
}
void opt2(int m, SinhVien *a)
{
    scanf("\n");
    char temp[100];
    gets(temp);
    int i;
    for (i = 1; i <= lastPos; i++)
    {
        if (strcmp(temp, a->name[i]) == 0)
        {
            gets(a->maSV[i]);
            gets(a->name[i]);
            gets(a->dateob[i]);
            break;
        }
    }
    printf("%s\n", a->maSV[i]);
}
void opt3(SinhVien a)
{
    for (int i = 1; a.stt[i] == 1; i++)
    {
        int min = a.tong[i], pos = i;
        for (int j = i; a.stt[j] == 1; j++)
        {
            if (a.tong[j] < min)
            {
                min = a.tong[j];
                pos = j;
            }
        }
        printf("%d %s %.1f %.1f %.1f\n", pos, a.ten[pos], a.A[pos], a.B[pos], a.C[pos]);
    }
}
SinhVien a;
int main()
{
    int opt, last;
    while (1)
    {
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
        {
            int n;
            scanf("%d", &n);
            opt1(n, &a);
            break;
        }
        case 2:
        {
            int m;
            scanf("%d", &m);
            opt2(m, &a);
            break;
        }
        case 3:
        {
            opt3(a);
            return 0;
        }
        }
    }
}