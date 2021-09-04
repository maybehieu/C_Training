#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        a = abs(a), b = abs(b);
        if (a + b > n || (n - a - b) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}