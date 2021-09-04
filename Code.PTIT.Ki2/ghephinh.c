#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int canh[6] = {}, danhdau[105] = {}, max = 0, s, check1 = 0, check2 = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &canh[i]);
        danhdau[canh[i]]++;
        if (canh[i] > max)
        {
            max = canh[i];
        }
        if (danhdau[canh[i]] >= 3)
        {
            check1 = 1;
        }
        if (danhdau[canh[i]] >= 2 && canh[i] != max)
        {
            check2 = 1;
        }
    }
    s = canh[0] * canh[1] + canh[2] * canh[3] + canh[4] * canh[5];
    int s0 = max * max;
    if (s0 == s && check1 == 1)
    {
        printf("YES");
    }
    else if (s0 == s && check2 == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}