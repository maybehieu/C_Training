#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, chan = 0, le = 0;
        scanf("%d", &n);
        while (n > 0)
        {
            int temp = n % 10;
            if (temp % 2 == 0)
            {
                chan++;
            }
            else
            {
                le++;
            }
            n /= 10;
        }
        printf("%d %d\n", le, chan);
    }
    return 0;
}