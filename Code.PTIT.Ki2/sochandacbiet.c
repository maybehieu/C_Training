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
        long long n;
        int check = 1;
        scanf("%lld", &n);
        if (n % 2 == 0)
        {
            n /= 10;
            while (n > 0)
            {
                if (n % 2 != 0)
                {
                    check = 0;
                    break;
                }
                n /= 10;
            }
            if (check == 1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}