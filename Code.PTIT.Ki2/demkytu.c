#include <stdio.h>
#include <math.h>
#include <string.h>
int danhdau[10000000];
void reset()
{
    for (int i = 0; i < 10000000; i++)
    {
        danhdau[i] = 0;
    }
}
int main()
{
    reset();
    int chucai = 0, chuso = 0, kytu = 0;
    char s[10000], s1[10000];
    gets(s);
    for (int i = 0; i != strlen(s); i++)
    {
        // danhdau[s[i]]++;
        if (s[i] >= 65 && s[i] <= 90)
        {
            chucai++;
            // s1[i] = s[i] + 32;
            // danhdau[s1[i]]++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            chucai++;
            // s1[i] = s[i] - 32;
            // danhdau[s1[i]]++;
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            chuso++;
        }
        else
        {
            kytu++;
        }
    }
    printf("%d %d %d", chucai, chuso, kytu);
    return 0;
}