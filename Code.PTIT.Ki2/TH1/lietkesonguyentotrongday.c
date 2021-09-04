#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int n)
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
    int n, arr[101] = {}, dem = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i]))
        {
            dem++;
        }
        }
    printf("%d ", dem);
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}