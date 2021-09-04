#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, ngay[1000];
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> ngay[i];
    }
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ngay[i] - ngay[i + 1] > 0 && ngay[i] - ngay[i + 1] > max)
        {
            max = ngay[i] - ngay[i + 1];
        }
    }
    if (max >= c)
    {
        cout << max - c;
    }
    else
    {
        cout << "0";
    }

    return 0;
}