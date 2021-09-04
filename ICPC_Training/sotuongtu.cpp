#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, arr[1001], chan = 0, le = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                chan++;
            }
            else
            {
                le++;
            }
        }
        int check = 0;
        if (chan % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (abs(arr[i] - arr[j]) == 1)
                    {
                        cout << "YES" << endl;
                        check = 1;
                        break;
                    }
                }
                if (check == 1)
                {
                    break;
                }
            }
            if (check == 0)
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}