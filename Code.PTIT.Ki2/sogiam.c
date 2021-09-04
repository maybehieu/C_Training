#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int check(int a)
{
    while (a > 0)
    {
        int m = a % 10;
        a /= 10;
        if (a % 10 <= m && a != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int min, max, dem = 0;
        scanf("%d %d", &min, &max);
        for (int i = min; i <= max; i++)
        {
            if (check(i))
            {
                dem++;
            }
        }
        printf("%d\n", dem);
    }

    return 0;
}