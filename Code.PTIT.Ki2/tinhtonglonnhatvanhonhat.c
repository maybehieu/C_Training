#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int arr[55], pos = 0;
void reset()
{
    for (int i = 0; i < 55; i++)
    {
        arr[i] = 0;
    }
    pos = 0;
}
void tach(long long n)
{
    while (n > 0)
    {
        arr[pos] = n % 10;
        pos++, n /= 10;
    }
    arr[pos] = -1, pos++;
}
long long max(int a)
{
    long long x = 0, y = 0;
    for (int i = a - 2; arr[i] != -1; i--)
    {
        if (arr[i] == 5)
        {
            arr[i] = 6;
        }
        x = x * 10 + arr[i];
        a = i;
    }
    for (int i = a - 2; i >= 0; i--)
    {
        if (arr[i] == 5)
        {
            arr[i] = 6;
        }
        y = y * 10 + arr[i];
    }
    return x + y;
}
long long min(int a)
{
    long long x = 0, y = 0;
    for (int i = a - 2; arr[i] != -1; i--)
    {
        if (arr[i] == 6)
        {
            arr[i] = 5;
        }
        x = x * 10 + arr[i];
        a = i;
    }
    for (int i = a - 2; i >= 0; i--)
    {
        if (arr[i] == 6)
        {
            arr[i] = 5;
        }
        y = y * 10 + arr[i];
    }
    return x + y;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        tach(a), tach(b);
        int temp = pos;
        printf("%lld %lld\n", min(temp), max(pos));
        reset();
    }
    return 0;
}