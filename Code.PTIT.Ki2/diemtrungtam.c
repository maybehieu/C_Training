#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int n, arr[100005][2] = {};
int check(int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i][0] == arr[0][0] || arr[i][1] == arr[0][0] || arr[i][0] == arr[0][1] || arr[i][i] == arr[0][1])
        {
            continue;
        }
        return 0;
    }
    return 1;
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    if (check(n))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}