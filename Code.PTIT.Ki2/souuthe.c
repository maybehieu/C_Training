#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char so[1001];
        int dem = 0, chan = 0, le = 0, check = 0;
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
            else
            {
                if ((so[i] - '0') % 2 == 0)
                {
                    chan++;
                    dem++;
                }
                else
                {
                    le++;
                    dem++;
                }
            }
        }
        if (check == 0)
        {
            if (chan % 2 == 0 && dem % 2 == 0 && chan > le)
            {
                printf("YES\n");
            }
            else if (le % 2 == 1 && dem % 2 == 1 && chan < le)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}