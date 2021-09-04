#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, a = 2, ptu;
        cin >> n >> k;
        int q = k;
        while (k < n)
        {
            k = q * a;
            a++;
        }
        if (k % n == 0)
        {
            ptu = k / n;
        }
        else
        {
            ptu = k / n + 1;
        }
        cout << ptu << endl;
    }

    return 0;
}