#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n, check = 0, chuSo;
        scanf("%d", &n);
        while (n > 0)
        {
            chuSo = n % 10;
            if (chuSo != 0 && chuSo != 6 && chuSo != 8)
            {
                printf("NO\n");
                check = 1;
                break;
            }
            n /= 10;
        }
        if (check == 0)
        {
            printf("YES\n");
        }
    }

    return 0;
}