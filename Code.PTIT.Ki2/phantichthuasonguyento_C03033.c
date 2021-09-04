#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int temp = n;
        printf("%d = ", temp);
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
                printf("%d^%d", i, dem);
                if (n != 1)
                {
                    printf(" * ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}