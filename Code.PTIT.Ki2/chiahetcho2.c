#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, dem = 0;
        scanf("%d", &n);
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int j = n / i;
                if (i % 2 == 0)
                {
                    dem++;
                }
                if (j % 2 == 0 && i != j)
                {
                    dem++;
                }
            }
        }
        printf("%d\n", dem);
    }

    return 0;
}