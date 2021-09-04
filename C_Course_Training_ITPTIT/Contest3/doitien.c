#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo, n, tongto = 0;
    int arr[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d", &n);
        while (n > 0)
        {
            for (int i = 0; i < 10; i++)
            {
                if (n >= arr[i])
                {
                    for (int j = 1; j > 0; j++)
                    {
                        n = n - arr[i];
                        tongto++;
                        if (n < arr[i])
                        {
                            break;
                        }
                    }
                }
            }
        }
        printf("%d\n", tongto);
        tongto = 0;
    }
    return 0;
}