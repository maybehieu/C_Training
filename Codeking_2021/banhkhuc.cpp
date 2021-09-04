#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int gio1, gio2;
        long long tien1, tien2;
        cin >> gio1 >> gio2;
        cin >> tien1 >> tien2;
        long long tien = 0;
        if (tien2 < tien1 * 2)
        {
            tien += tien1 * abs(gio1 - gio2);
            if (gio1 > gio2)
            {
                tien += tien2 * gio2;
            }
            else
            {
                tien += tien2 * gio1;
            }
        }
        else
        {
            tien += tien1 * (gio1 + gio2);
        }
        cout << tien << endl;
    }

    return 0;
}