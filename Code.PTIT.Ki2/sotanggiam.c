#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int check(int a)
{
    int b = a / 10, temp;
    int max = a % 10;
    while (b != 0)
    {
        temp = b % 10;
        b /= 10;
        if (temp >= max)
        {
            return 0;
        }
        else
        {
            max = temp;
        }
    }
    return 1;
}
int check2(int a)
{
    int b = a / 10, temp;
    int min = a % 10;
    while (b != 0)
    {
        temp = b % 10;
        b /= 10;
        if (temp <= min)
        {
            return 0;
        }
        else
        {
            min = temp;
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
        int n, min = 1, max, dem = 0;
        scanf("%d", &n);
        for (int i = 1; i < n; i++)
        {
            min *= 10;
        }
        max = min * 10;
        for (int i = min; i < max; i++)
        {
            if (check(i) && isPrime(i))
            {
                dem++;
                continue;
            }
            else if (check2(i) && isPrime(i))
            {
                dem++;
            }
        }
        printf("%d\n", dem);
    }

    return 0;
}