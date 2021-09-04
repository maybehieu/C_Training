#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, danhdau[1000] = {};
    string s, enter;
    cin >> s;
    std::cin.ignore();
    cin >> n;
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            danhdau[s[i] + 32]++;
        }
        else
        {
            danhdau[s[i]]++;
        }
    }
    for (int i = 97; i <= 122; i++)
    {
        if (danhdau[i] < 1)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}