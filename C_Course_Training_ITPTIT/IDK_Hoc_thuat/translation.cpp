#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[n - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}