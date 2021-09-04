#include <stdio.h>
#include <math.h>
#include <string.h>
int i, j;
int check(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != 1)
            {
                j = n / i;
            }
            sum = sum + i + j;
            j = 0;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", check(n));
    return 0;
}