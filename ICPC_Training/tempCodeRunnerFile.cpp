#include <bits/stdc++.h>
using namespace std;
int arr[20001], danhdau[20001];
void reset()
{
    for (int i = 0; i < 20000; i++)
    {
        arr[i] = 0;
        danhdau[i] = 0;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        reset();
        int n, dem = 0, giong = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            danhdau[arr[i]]++;
            if (giong < danhdau[arr[i]])
            {
                giong = danhdau[arr[i]];
            }
            dem++;
        }
        int diff = dem - giong;
        if (giong == 1 && giong != dem)
        {
            cout << "1" << endl;
        }
        else if (diff == 1)
        {
            cout << diff + 1 << endl;
        }
        else if (diff > giong)
        {
            cout << giong << endl;
        }
        else if (giong - diff == 2)
        {
            cout << giong - 1 << endl;
        }
        else
        {
            cout << diff << endl;
        }
    }

    return 0;
}