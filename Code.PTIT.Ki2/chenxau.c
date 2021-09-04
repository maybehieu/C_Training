#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char xau1[1000], xau2[1000];
    gets(xau1);
    gets(xau2);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%c", xau1[i]);
    }
    for (int i = 0; i < strlen(xau2); i++)
    {
        printf("%c", xau2[i]);
    }
    for (int i = n - 1; i < strlen(xau1); i++)
    {
        printf("%c", xau1[i]);
    }

    return 0;
}