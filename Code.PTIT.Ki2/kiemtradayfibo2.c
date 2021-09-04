#include <stdio.h>
#include <math.h>
#include <string.h>
int checkFibo(long long n)
{
    long long a = 0, b = 1, c = 0;
    int check = 0;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        while (c < n)
        {
            c = a + b;
            if (c == n)
            {
                check = 1;
                break;
            }
            a = b;
            b = c;
        }
        if (check == 1)
        {
            return 1;
        }
        return 0;
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    long long arr[100] = {};
    for (int i = 0; i < test; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < test; i++)
    {
        if (checkFibo(arr[i]))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}