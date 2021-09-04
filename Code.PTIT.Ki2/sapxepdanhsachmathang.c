#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char ten[100][100];
    char nhom[100][100];
    float mua[100];
    float ban[100];
    float lai[100];
} DanhSach;
void in(DanhSach *list, int *n)
{
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        scanf("\n");
        gets(list->ten[i]);
        gets(list->nhom[i]);
        scanf("%f", &(list->mua[i]));
        scanf("%f", &(list->ban[i]));
        list->lai[i] = list->ban[i] - list->mua[i];
    }
}
void out(DanhSach list, int *n)
{
    int pos = 0;
    for (int i = 0; i < *n; i++)
    {
        float max = 0;
        for (int j = 0; j < *n; j++)
        {
            if (max < list.lai[j])
            {
                max = list.lai[j];
                pos = j;
            }
        }
        printf("%d %s %s %.2f\n", pos + 1, list.ten[pos], list.nhom[pos], list.lai[pos]);
        list.lai[pos] = 0.0;
    }
}
int main()
{
    int n;
    DanhSach list;
    in(&list, &n);
    out(list, &n);

    return 0;
}