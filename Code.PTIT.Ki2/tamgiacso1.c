#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    for (int i = 1; dem < n; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        dem++;
    }

    return 0;
}