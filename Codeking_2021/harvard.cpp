#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, arr[1005] = {}, du1 = 0, du2 = 0, dem = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 3 == 0 && arr[i] != 0)
            {
                dem++;
            }
            else if (arr[i] % 3 == 1)
            {
                du1++;
            }
            else if (arr[i] % 3 == 2)
            {
                du2++;
            }
        }
        while (du1 > 0 && du2 > 0)
        {
            dem++;
            du1--, du2--;
        }
        dem += du1 / 3;
        dem += du2 / 3;
        cout << dem << endl;
    }

    return 0;
}