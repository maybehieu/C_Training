#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, sum = 0, so;
    scanf("%d", &n);
    for (int a = 1; a < n; a++)
    {
        int i = a;
        while (i > 0)
        {
            int temp = 1;
            so = i % 10;
            for (int j = 1; j <= so; j++)
            {
                temp = temp * j;
            }
            sum += temp;
            i /= 10;
        }
        if (sum == a)
        {
            printf("%d ", a);
        }
        sum = 0;
    }

    return 0;
}