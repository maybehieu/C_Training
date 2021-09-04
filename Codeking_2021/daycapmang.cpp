#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int arr[10000] = {}, uocArr[10000] = {}, tongArr[10000] = {}, sum = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] = s[i] - '0';
            sum += arr[i];
        }
        int a = 0;
        for (int i = 2; i <= sum / 2; i++)
        {
            if (sum % i == 0)
            {

                uocArr[a] = i;
                tongArr[a] = sum / i;
                a++;
            }
        }
        int check1 = 0;
        for (int i = 0; i < a; i++)
        {
            int j = 0, check2 = 1, dem = 0;
            while (j < n)
            {
                int temp = 0;
                while (temp != tongArr[i])
                {
                    temp += arr[j];
                    j++;
                    if (j == n + 1)
                    {
                        check2 = 0;
                        break;
                    }
                }
                if (check2)
                {
                    dem++;
                }
            }
            if (dem == uocArr[i])
            {
                check1 = 1;
                break;
            }
        }
        if (check1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}