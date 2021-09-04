#include <stdio.h>
#include <math.h>
#include <string.h>
int dem = 0, le = 0, chan = 0;
void kiemtra(char so[100005], int a)
{

    if ((so[a] - '0') % 2 == 0)
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
int main()
{
    int test;
    scanf("%d\n", &test);
    while (test--)
    {
        dem = 0, le = 0, chan = 0;
        char so[100005] = {};
        gets(so);
        for (int i = 0; so[i] != '\000'; i++)
        {
            if (so[i] == ' ')
            {
                continue;
            }
            if ((so[i] != ' ' && so[i + 1] == ' ') || (so[i] != ' ' && so[i + 1] == '\000'))
            {
                kiemtra(so, i);
            }
        }
        if ((dem % 2 == 0 && chan > le) || (dem % 2 == 1 && chan < le))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}