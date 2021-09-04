#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp = i;
        int sum = 0;
        int check = 1;
        while (temp > 0)
        {
            if (temp % 10 == 9)
            {
                check = 0;
                break;
            }
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
            dem++;
        }
    }
    printf("\n%d", dem);
    return 0;
}