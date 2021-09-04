#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, du = 1, chuso, chan = 0, le = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0 0");
        return 0;
    }
    while (du > 0)
    {
        chuso = n % 10;
        if (chuso % 2 == 0)
        {
            chan++;
        }
        else
        {
            le++;
        }
        n /= 10;
        du = n;
    }
    printf("%d %d", le, chan);
    return 0;
}
