#include <stdio.h>
#include <math.h>
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
    int bo;
    int m = 0, snt = 0;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, arr[1000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (isPrime(arr[i]))
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}