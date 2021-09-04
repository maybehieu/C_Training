#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[1000], arr2D[100][100];
    int j = 0, k = 0;
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            arr2D[k][j];
            k++;
            j = 0;
        }
        else
        {
            arr2D[k][j] = s[i];
            j++;
        }
    }
    arr2D[k][j] = '\0';
    j = 0;
    for (int i = 0; i < k; i++)
    {
        int vitri = 0;
        for (int m = 1; m < k + 1; m++)
        {
            if (arr2D[m][j] == '\0' || m == i)
            {
                continue;
            }
            if (strcmp(arr2D[i], arr2D[m]) == 0)
            {
                arr2D[m][j] = '\0';
                vitri++;
            }
        }
    }
    j = 0;
    int check = 1;
    for (int i = 0; i < k + 1; i++)
    {
        if (arr2D[i] == '\0')
        {
            continue;
        }
        else
        {
            printf("%s ", arr2D[i]);
        }
    }

    return 0;
}