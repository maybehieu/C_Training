#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        char s[22];
        int remain = 1, check = 1;
        gets(s);
        int n = (strlen(s) % 2 == 0) ? strlen(s) / 2 : (strlen(s) + 1) / 2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[strlen(s) - i - 1])
            {
                remain--;
                if (remain < 0)
                {
                    printf("NO\n");
                    check = 0;
                    break;
                }
            }
        }
        if (remain == 1 && strlen(s) % 2 == 0)
        {
            printf("NO\n");
            check = 0;
            continue;
        }
        if (check == 1)
        {
            printf("YES\n");
        }
    }

    return 0;
}