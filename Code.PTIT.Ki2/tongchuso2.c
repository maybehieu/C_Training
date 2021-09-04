#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int so, sum = 0;
        scanf("%d", &so);
        while (so > 0)
        {
            sum += so % 10;
            so /= 10;
        }
        printf("%d\n", sum);
    }

    return 0;
}