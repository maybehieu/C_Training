#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("~");
        }
        for (int j = 2; j <= i * 2; j += 2)
        {
            printf("%d", j);
        }
        for (int j = (i - 1) * 2; j >= 2; j -= 2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}