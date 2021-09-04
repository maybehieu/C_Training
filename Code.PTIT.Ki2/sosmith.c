#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp = n, sum1 = 0, sum2 = 0, a = 2;
    for (int a = 2; a <= temp; a++)
    {
        while (temp % a == 0)
        {
            int i = a;
            while (i > 0)
            {

                sum1 += i % 10;
                i /= 10;
            }
            temp /= a;
        }
    }

    temp = n;
    while (temp > 0)
    {
        sum2 += temp % 10;
        temp /= 10;
    }
    if (sum1 == sum2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}