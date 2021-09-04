#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char ten[8000][50];
    int stt[8000];
    float A[8000], B[8000], C[8000];
    float tong[8000];
} SinhVien;
SinhVien a;
int lastPos = 1;
void opt1(int n, SinhVien *a)
{
    int i;
    for (i = lastPos; i <= n; i++)
    {
        scanf("\n");
        gets(a->ten[i]);
        scanf("%f %f %f", &(a->A[i]), &(a->B[i]), &(a->C[i]));
        a->tong[i] = a->A[i] + a->B[i] + a->C[i];
        a->stt[i] = 1;
    }
    lastPos = i;
    printf("%d\n", n);
}
void opt2(int m, SinhVien *a)
{
    scanf("\n");
    gets(a->ten[m]);
    scanf("%f %f %f", &(a->A[m]), &(a->B[m]), &(a->C[m]));
    a->tong[m] = a->A[m] + a->B[m] + a->C[m];
    printf("%d\n", m);
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