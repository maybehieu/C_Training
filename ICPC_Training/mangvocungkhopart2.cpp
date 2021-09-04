#include <bits/stdc++.h>
using namespace std;
int arr[200001], danhdau[200001];
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, dem = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int m = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                danhdau[m] = dem;
                m++;
                dem = 1;
            }
            else
            {
                dem++;
            }
        }
        danhdau[m] = dem;
        int final = 0;
        for (int i = 0; i <= m; i++)
        {
            int temp1 = min(m - 1, danhdau[i]);
            int temp2 = min(m, danhdau[i] - 1);
            final = max(final, max(temp1, temp2));
        }
        cout << final << endl;
    }

    return 0;
}