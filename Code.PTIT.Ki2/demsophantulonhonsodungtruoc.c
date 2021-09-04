#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[100];
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, dem = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int check = 1;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] < arr[j])
                {
                    check = 0;
                    break;
                }
            }
            if (check == 1)
            {
                dem++;
            }
        }

        printf("%d\n", dem);
    }

    return 0;
}