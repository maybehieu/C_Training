#include <stdio.h>
#include <math.h>
#include <string.h>
void kiemtra()
{
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int a = 1; a <= test; a++)
    {
        int n, arr[103] = {}, dem = 0, pos[103] = {}, vitri = 0, max = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n;)
        {
            dem = 0;
            for (int j = i; j < n; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    dem++;
                    if (max < dem)
                    {
                        max = dem;
                    }
                }
                else if (dem == max)
                {
                    pos[vitri] = j - dem;
                    vitri++;
                    i = j + 1;
                    break;
                }
                else
                {
                    i = j + 1;
                    break;
                }
            }
        }
        printf("Test %d:\n", a);
        for (int i = 0; i < vitri; i++)
        {
            int step = 0, check = 1;
            for (int j = pos[i]; step < max; j++, step++)
            {
                if (arr[j] > arr[j + 1])
                {
                    check = 0;
                    break;
                }
            }
            if (check == 0)
            {
                continue;
            }
            step = 0;
            for (int j = pos[i]; step <= max; j++, step++)
            {
                printf("%d ", arr[j]);
            }
            printf("\n");
        }
    }

    return 0;
}