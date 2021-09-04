#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int min(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d", &n);
    int len[50000] = {}, xuong[50000] = {}, minLen = 99999, minXuong = 99999, sumLen = 0, sumXuong = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &len[i], &xuong[i]);
        if (len[i] < minLen)
        {
            minLen = len[i];
        }
        if (xuong[i] < minXuong)
        {
            minXuong = xuong[i];
        }
        sumLen += len[i];
        sumXuong += xuong[i];
    }
    sumLen += minXuong;
    sumXuong += minLen;
    printf("%d", min(sumLen, sumXuong));
    return 0;
}