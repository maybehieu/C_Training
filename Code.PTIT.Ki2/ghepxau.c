#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        char xau[100][100] = {};
        int n;
        scanf("%d ", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%s", &xau[i]);
        }
        char temp[100], s1[100], s2[100];
        for (int i = 0; i < n - 1; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                strcpy(s1, xau[i]);
                strcat(s1, xau[j]);
                strcpy(s2, xau[j]);
                strcat(s2, xau[i]);
                if (strcmp(s1, s2) > 0)
                {
                    strcpy(temp, xau[i]);
                    strcpy(xau[i], xau[j]);
                    strcpy(xau[j], temp);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%s", xau[i]);
        }
        printf("\n");
    }

    return 0;
}