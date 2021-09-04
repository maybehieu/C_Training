#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char xau1[1000], xau2[1000], tu1[100][100] = {}, tu2[100][100] = {}, temp[10][100];
        int m = 0, n = 0, k = 1, t = 1;
        gets(xau1);
        gets(xau2);
        char *token = strtok(xau1, " ");
        while (token != NULL)
        {
            strcpy(tu1[m], token);
            token = strtok(NULL, " ");
            m++;
        }
        token = strtok(xau2, " ");
        while (token != NULL)
        {
            strcpy(tu2[n], token);
            token = strtok(NULL, " ");
            n++;
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                if (strcmp(tu1[i], tu1[j]) > 0)
                {
                    strcpy(temp[0], tu1[i]);
                    strcpy(tu1[i], tu1[j]);
                    strcpy(tu1[j], temp[0]);
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (strcmp(tu1[i], tu2[j]) == 0)
                {
                    k = 0;
                    continue;
                }
            }
            for (int j = i + 1; j < m; j++)
            {
                if (strcmp(tu1[i], tu1[j]) == 0)
                {
                    t++;
                }
            }
            if (k != 0 && t == 1)
            {
                printf("%s ", tu1[i]);
            }
            k = 1, t = 1;
        }
        printf("\n");
    }

    return 0;
}