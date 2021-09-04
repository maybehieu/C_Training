#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a = 0, b = 1, c, n, arr[10000] = {1, 1};
    scanf("%d", &n);
    for (int i = 2; i < (n * n); i++)
    {
        c = a + b;
        arr[i] = c;
        a = b;
        b = c;
    }

    return 0;
}