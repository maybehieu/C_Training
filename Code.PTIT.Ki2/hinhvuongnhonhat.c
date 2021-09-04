#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int arr1[5] = {}, arr2[5] = {};
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int minX = 9999, minY = 9999, maxX = 0, maxY = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            if (arr1[i] < minX)
            {
                minX = arr1[i];
            }
            else if (arr1[i] > maxX)
            {
                maxX = arr1[i];
            }
        }
        else
        {
            if (arr1[i] < minY)
            {
                minY = arr1[i];
            }
            else if (arr1[i] > maxY)
            {
                maxY = arr1[i];
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            if (arr2[i] < minX)
            {
                minX = arr2[i];
            }
            else if (arr2[i] > maxX)
            {
                maxX = arr2[i];
            }
        }
        else
        {
            if (arr2[i] < minY)
            {
                minY = arr2[i];
            }
            else if (arr2[i] > maxY)
            {
                maxY = arr2[i];
            }
        }
    }
    long long canh = ((maxX - minX) > (maxY - minY)) ? (maxX - minX) : (maxY - minY);
    printf("%lld", canh * canh);
    return 0;
}