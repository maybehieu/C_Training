#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
long long solve(long long n, long long k)
{
    int dem = 0;
    for (long long i = 2; i <= n; i += 2)
    {
        long long temp = i;
        while (temp % 2 == 0)
        {
            dem++, temp /= 2;
        }
        if (dem >= k)
        {
            return 1;
        }
    }
    return 0;
}
// long long soMu(long long k)
// {
//     long long mu = 1;
//     for (int i = 0; i < k; i++)
//     {
//         mu *= 2;
//     }
//     return mu;
// }
int main()
{
    long long n, k;
    scanf("%lld %lld", &n, &k);
    if (solve(n, k))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}