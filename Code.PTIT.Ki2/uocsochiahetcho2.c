#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, test = 1, dem = 0;
        scanf("%d", &n);
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    dem++;
                }
                int temp = n / i;
                if (temp % 2 == 0 && temp != i)
                {
                    dem++;
                }
            }
        }
        printf("%d\n", dem);
    }

    return 0;
}