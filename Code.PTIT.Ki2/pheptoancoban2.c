#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    long long a, b;
    scanf("%d %d", &a, &b);
    float m = a, n = b;
    printf("%d\n%d\n%lld\n%d\n%d\n%.2f", a + b, a - b, a * b, a / b, a % b, m / n);
    return 0;
}