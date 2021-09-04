#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int min = 99999999, so;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &so);
        if (min > so)
        {
            min = so;
        }
    }
    printf("%d", min);
    return 0;
}