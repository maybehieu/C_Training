#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo, test = 1;
    ;
    scanf("%d", &bo);
    while (bo--)
    {
        int n;
        scanf("%d", &n);
        printf("Test %d: ", test);
        for (int i = 2; i <= n; i++)
        {
            int dem = 0;
            while (n % i == 0)
            {
                dem++;
                n /= i;
            }
            if (dem > 0)
            {
                printf("%d(%d) ", i, dem);
            }
        }
        printf("\n");
        test++;
    }

    return 0;
}