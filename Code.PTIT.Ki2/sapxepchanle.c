#include <stdio.h>
#include <math.h>
#include <string.h>
long long arr[1000], chan[1000], le[1000];
int main()
{
    int n, dem1 = 0, dem2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            chan[dem1] = arr[i];
            dem1++;
        }
        else
        {
            le[dem2] = arr[i];
            dem2++;
        }
    }
    for (int i = 0; i < dem1 - 1; i++)
    {
        for (int j = i + 1; j < dem1; j++)
        {
            if (chan[j] < chan[i])
            {
                long long temp = chan[i];
                chan[i] = chan[j];
                chan[j] = temp;
            }
        }
    }
    for (int i = 0; i < dem2 - 1; i++)
    {
        for (int j = i + 1; j < dem2; j++)
        {
            if (le[j] > le[i])
            {
                long long temp = le[i];
                le[i] = le[j];
                le[j] = temp;
            }
        }
    }

    for (int i = 0; i < dem1; i++)
    {
        printf("%lld ", chan[i]);
    }
    for (int i = dem2 - 1; i >= 0; i--)
    {
        printf("%lld ", le[i]);
    }

    return 0;
}