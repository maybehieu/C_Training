#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void lwr(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
    }
}
int main()
{
    int test;
    char entKey;
    scanf("%d\n", &test);
    for (int m = 1; m <= test; m++)
    {
        int pos = 0;
        char xau[205], tu1[100][100] = {}, xoa[30], tu2[100][100] = {};
        gets(xau);
        gets(xoa);
        char *token = strtok(xau, " ");
        while (token != NULL)
        {
            strcpy(tu1[pos], token);
            strcpy(tu2[pos], token);
            token = strtok(NULL, " ");
            pos++;
        }
        lwr(xoa);
        printf("Test %d: ", m);
        for (int i = 0; i < pos; i++)
        {
            lwr(tu2[i]);
            if (strcmp(xoa, tu2[i]))
            {
                printf("%s ", tu1[i]);
            }
        }
        printf("\n");
    }

    return 0;
}