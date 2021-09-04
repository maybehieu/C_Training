#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, sum = 0, so;
    scanf("%d", &n);
    int m = n;
    while (n > 0)
    {
        int temp = 1;
        so = n % 10;
        for (int i = 1; i <= so; i++)
        {
            temp = temp * i;
        }
        sum += temp;
        n /= 10;
    }
    if (sum == m)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}