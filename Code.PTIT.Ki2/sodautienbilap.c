#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, arr[100000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int check = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d\n", arr[i]);
                    check = 1;
                    break;
                }
            }
            if (check == 1)
            {
                break;
            }
        }
        if (check == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}