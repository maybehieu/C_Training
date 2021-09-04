#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(long long n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, dem = 0;
    scanf("%d", &n);
    for (int i = 5; i < n; i++)
    {
        if (isPrime(i))
        {
            int sum = 0, temp = i;
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum % 5 == 0)
            {
                printf("%d ", i);
                dem++;
            }
        }
    }
    printf("\n%d", dem);
    return 0;
}