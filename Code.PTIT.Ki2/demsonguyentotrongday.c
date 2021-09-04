#include <stdio.h>
#include <math.h>
#include <string.h>
int arr[1000], danhdau[100000];
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
void resetMang()
{
    for (int i = 0; i < 100000; i++)
    {
        danhdau[i] = 0;
    }
}
int main()
{
    int bo, test = 1;
    scanf("%d", &bo);
    while (bo--)
    {
        int n;
        scanf("%d", &n);
        resetMang();
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (isPrime(arr[i]))
            {
                danhdau[arr[i]]++;
            }
        }
        printf("Test %d:\n", test);
        for (int i = 0; i < 100000; i++)
        {
            if (danhdau[i] != 0)
            {
                printf("%d xuat hien %d lan\n", i, danhdau[i]);
                danhdau[i] = 0;
            }
        }
        test++;
    }

    return 0;
}