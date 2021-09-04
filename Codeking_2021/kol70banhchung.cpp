#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

long long mu(long long x, long long k)
{
    if (k == 0)
    {
        return 1;
    }
    long long temp = mu(x, k / 2);
    if (k % 2 == 1)
    {
        return (temp * temp * x) % mod;
    }
    return (temp * temp) % mod;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        if (n <= 3)
        {
            cout << n << endl;
        }
        else
        {
            long long k = 0, temp = 0;
            if (n % 3 == 0)
            {
                k = n / 3;
                temp = mu(3, k) % mod;
                cout << temp << endl;
            }
            else if (n % 3 == 1)
            {
                k = (n - 4) / 3;
                temp = (mu(3, k) * 4) % mod;
                cout << temp << endl;
            }
            else
            {
                k = (n - 2) / 3;
                temp = (mu(3, k) * 2) % mod;
                cout << temp << endl;
            }
        }
    }

    return 0;
}