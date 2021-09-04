#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, arr[10000] = {};
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if ((float)(arr[n - 1] - arr[0]) / 2.0 <= (float)k)
        {
            cout << arr[0] + k << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}