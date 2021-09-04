#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, value = 65;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp = value;
        for (int j = n - i; j > 0; j--)
        {
            printf("%c ", temp);
            temp += 2;
        }
        value += 2;
        printf("\n");
    }

    return 0;
}