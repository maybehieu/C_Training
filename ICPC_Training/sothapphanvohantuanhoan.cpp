#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string n;
        cin >> n;
        int a = 0, b = 0, c = 0, x = 0, y = 0, z = 0;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == ',')
            {
                break;
            }
            a = a * 10 + (n[i] - '0');
            x++;
        }
        int temp = x;
        for (int i = ++temp; i < n.length(); i++)
        {
            if (n[i] == '(')
            {
                break;
            }
            b = b * 10 + (n[i] - '0');
            y++;
            temp++;
        }
        for (int i = ++temp; i < n.length(); i++)
        {
            if (n[i] == ')')
            {
                break;
            }
            c = c * 10 + (n[i] - '0');
            z++;
        }
        long long tu = 0, mau = 1, mau1 = 1, mau2 = 1; // a,b(c)    1,12(12)
        while (y > 0)
        {
            mau1 *= 10;
            y--;
        }
        while (z > 0)
        {
            mau2 *= 10;
            z--;
        }
        mau2--;
        mau = mau1 * mau2;
        tu = (a * mau1 * mau2) + (b * mau2) + (c * 1);
        long long uoc = __gcd(tu, mau);
        tu /= uoc, mau /= uoc;
        cout << tu << " " << mau << endl;
    }

    return 0;
}