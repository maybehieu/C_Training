#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo, arr[10000] = {};
    int n, a = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            arr[a] = i;
            n /= i;
            a++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d", arr[i]);
        if (i == a - 1)
        {
            break;
        }
        printf("x");
    }

    return 0;
}