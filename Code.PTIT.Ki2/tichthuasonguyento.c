#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, sum = 1;
        scanf("%d", &n);
        for (int i = 2; i <= n; i++)
        {
            int check = 1;
            while (n % i == 0)
            {
                if (check == 1)
                {
                    sum *= i;
                    check = 0;
                }
                n /= i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}