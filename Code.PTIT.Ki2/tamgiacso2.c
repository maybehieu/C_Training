#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dem = 1;
    for (int i = 3; dem <= n; i += 2)
    {
        for (int j = 1; j < i; j++)
        {
            if (dem % 2 == 1)
            {
                if (j % 2 == 1)
                {
                    printf("%d", j);
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    printf("%d", j);
                }
            }
        }
        printf("\n");
        dem++;
    }

    return 0;
}