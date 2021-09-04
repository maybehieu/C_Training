#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char name[100][100];
    short req[100];
    short avai[100];
} TienHoa;

void in(TienHoa *list, int *n)
{
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        scanf("\n");
        gets(list->name[i]);
        scanf("%d %d", &(list->req[i]), &(list->avai[i]));
    }
}
void process(TienHoa *list, int *n)
{
    int demAll = 0, max = 0, maxPos, dem = 0;
    for (int i = 0; i < *n; i++)
    {
        dem = 0;
        while (list->avai[i] >= list->req[i])
        {
            demAll += (list->avai[i] / list->req[i]);
            dem += (list->avai[i] / list->req[i]);
            list->avai[i] = list->avai[i] - (list->req[i] * (list->avai[i] / list->req[i])) + (list->avai[i] / list->req[i]) * 2;
        }
        if (max < dem)
        {
            max = dem;
            maxPos = i;
        }
    }
    printf("%d\n%s", demAll, list->name[maxPos]);
}
int main()
{
    TienHoa list;
    int n;
    in(&list, &n);
    process(&list, &n);
    return 0;
}