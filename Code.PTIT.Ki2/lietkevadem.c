#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int dem[100000], so[100000], pos = 0;
int check(int a)
{
    while (a > 0)
    {
        int m = a % 10;
        a /= 10;
        if (a % 10 > m)
        {
            return 0;
        }
    }
    return 1;
}
int find(int n)
{
    for (int i = 0; i < pos + 1; i++)
    {
        if (so[i] == n)
        {
            dem[i]++;
            return 0;
        }
    }
    so[pos] = n;
    dem[pos]++;
    pos++;
    return 0;
}
int main()
{
    int n;
    while (scanf("%d", &n) != -1)
    {
        if (check(n))
        {
            find(n);
        }
    }

    // for (int i = 0; i < 31; i++)     //test
    // {
    //     scanf("%d", &n);
    //     if (check(n))
    //     {
    //         find(n);
    //     }
    // }

    int soDem = pos;
    for (int i = 0; i < soDem; i++)
    {
        int max = 0, maxPos = 0;
        for (int j = 0; j < pos; j++)
        {
            if (max < dem[j])
            {
                max = dem[j];
                maxPos = j;
            }
        }
        printf("%d %d\n", so[maxPos], dem[maxPos]);
        so[maxPos] = 0, dem[maxPos] = 0;
    }

    return 0;
}
