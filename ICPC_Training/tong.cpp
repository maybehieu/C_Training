#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[1001] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            for (int k = j + 1; k < i; k++)
            {
                if (arr[j] + arr[k] == arr[i])
                {
                    cout << "YEU";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}