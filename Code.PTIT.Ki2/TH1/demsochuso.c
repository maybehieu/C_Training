#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, soCS = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        n /= 10;
        soCS++;
    }
    printf("%d", soCS);
    return 0;
}