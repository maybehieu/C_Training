#include <stdio.h>
#include <math.h>
#include <string.h>
int thuanNghich(int n)
{
    int m = n;
    int temp = 0;
    while (m > 0)
    {
        temp = temp * 10 + m % 10;
        m /= 10;
    }
    return temp == n;
}
int chiaHet(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s % 10 == 0;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int i = 1;
        for (int j = 0; j < n - 1; j++)
        {
            i *= 10;
        }
        int max = i * 10, dem = 0;
        for (int a = i; a < max; a++)
        {
            if (thuanNghich(a) && chiaHet(a))
            {
                dem++;
            }
        }
        printf("%d\n", dem);
    }

    return 0;
}