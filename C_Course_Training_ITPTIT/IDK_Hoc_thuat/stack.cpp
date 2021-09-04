#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> stack;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            stack.push(s[i]);
        }
        else
        {
            if (/* condition */)
            {
                /* code */
            }
        }
    }

    return 0;
}