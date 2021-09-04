#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp = n - i, dem = 0;
        for (int j = temp; dem < temp; j++, dem++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}