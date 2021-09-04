#include <stdio.h>
#include <math.h>
#include <string.h>
int era[2000005] = {}, tong[2000005] = {};
void sangEra()
{
    for (int i = 2; i < 2000005; i++)
    {
        era[i] = 1;
    }
    for (int i = 2; i < 2000005; i++)
    {
        if (era[i] == 1)
        {
            for (int j = i; j < 2000005; j += i)
            {
                era[j] = 0;
                int temp = j;
                while (temp % i == 0)
                {
                    temp /= i;
                    tong[j] += i;
                }
            }
        }
    }
}
int main()
{
    int n;
    long long sum = 0, a;
    scanf("%d", &n);
    sangEra();
    while (n--)
    {
        scanf("%lld", &a);
        sum += tong[a];
    }
    printf("%lld", sum);
    return 0;
}