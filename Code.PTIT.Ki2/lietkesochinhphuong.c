#include <stdio.h>
#include <math.h>
#include <string.h>
int scp[1000000];
int main()
{
    int m, n, dem = 0, stt = 0, sqr;
    scanf("%d %d", &m, &n);
    double a = sqrt(m), b = sqrt(n);
    if (a == (int)a)
    {
        a -= 1;
    }
    printf("%d\n", (int)b - (int)a);
    for (int i = sqrt(m); i <= sqrt(n); i++)
    {
        if (i > 1 && m <= (i * i))
        {
            printf("%lld\n", i * i);
        }
    }
    return 0;
}