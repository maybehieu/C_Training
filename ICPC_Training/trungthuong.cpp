#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;
    int dem = 0;
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            if ((pow(2, i) * pow(3, j)) >= m && (pow(2, i) * pow(3, j)) <= n)
            {
                dem++;
            }
            if ((pow(2, i) * pow(3, j)) > n)
            {
                break;
            }
        }
    }
    cout << dem;
    return 0;
}