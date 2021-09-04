#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char name[100][100];
    char dateob[100][100];
    float mark1[100];
    float mark2[100];
    float mark3[100];
    float markAll[100];
} HocSinh;
void in(HocSinh *a, int *n)
{
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        scanf("\n");
        gets(a->name[i]);
        gets(a->dateob[i]);
        scanf("%f", &(a->mark1[i]));
        scanf("%f", &(a->mark2[i]));
        scanf("%f", &(a->mark3[i]));
        a->markAll[i] = (a->mark1[i] + a->mark2[i] + a->mark3[i]);
    }
}
void out(HocSinh *a, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        float max = 0;
        int pos;
        for (int j = 0; j < *n; j++)
        {
            if (max < a->markAll[j])
            {
                max = a->markAll[j];
                pos = j;
            }
        }
        printf("%d %s %s %.1f\n", pos + 1, a->name[pos], a->dateob[pos], max);
        a->markAll[pos] = 0.0;
    }
}
int main()
{
    int n;
    HocSinh a;
    in(&a, &n);
    out(&a, &n);
    return 0;
}