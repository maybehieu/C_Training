#include <stdio.h>
#include <math.h>
#include <string.h>
char s[10000];
int arr[1000000];
void reset()
{
    for (int i = 0; i < 501; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        reset();
        gets(s);
        int check = 1, dem = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            arr[i] = s[i] - 48;
            if (arr[i] % 2 != 0)
            {
                printf("NO\n");
                check = 0;
                break;
            }
        }
        for (int i = 0; i < dem; i++)
        {
            if (arr[i] != arr[dem - i])
            {
                printf("NO\n");
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            printf("YES\n");
        }
    }

    return 0;
}