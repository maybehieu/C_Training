#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, dem = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        n /= 10;
        dem++;
    }
    printf("%d", dem);
    return 0;
}