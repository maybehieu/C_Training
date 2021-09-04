#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int value = 64 + n - 1;
    for (int i = 0; i < n; i++)
    {
        int temp = value;
        for (int j = n - i; j > 0; j--)
        {
            printf("%c", temp);
            temp++;
        }
        value--;
        printf("\n");
    }

    return 0;
}