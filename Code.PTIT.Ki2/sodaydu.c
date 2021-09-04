#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        int dem = 0, check = 0, danhdau[1000] = {};
        char so[1000];
        gets(so);
        if (so[0] == '0')
        {
            printf("INVALID\n");
            continue;
        }
        for (int i = 0; i < strlen(so); i++)
        {
            if (so[i] < '0' || so[i] > '9')
            {
                printf("INVALID\n");
                check = 1;
                break;
            }
            else //bugging
            {
                danhdau[so[i]]++;
                if (danhdau[so[i]] == 1)
                {
                    dem++;
                    if (dem == 10)
                    {
                        printf("YES\n");
                        check = 1;
                        break;
                    }
                }
            }
        }
        if (check == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}