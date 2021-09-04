#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, arr[1205] = {};
        cin >> n;
        if (n == 1)
        {
            cin >> arr[0];
            cout << "1" << endl;
            continue;
        }
        int max = n, maxPos, minPos, stepMin;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == max)
            {
                maxPos = i;
            }
            else if (arr[i] == 1)
            {
                minPos = i;
            }
        }
        if (minPos > maxPos)
        {
            stepMin = minPos + 1;
            int temp = n - maxPos;
            if (stepMin > temp)
            {
                stepMin = temp;
            }
            temp = maxPos + n - minPos + 1;
            if (stepMin > temp)
            {
                stepMin = temp;
            }
        }
        else
        {
            stepMin = maxPos + 1;
            int temp = n - minPos;
            if (stepMin > temp)
            {
                stepMin = temp;
            }
            temp = minPos + n - maxPos + 1;
            if (stepMin > temp)
            {
                stepMin = temp;
            }
        }
        cout << stepMin << endl;
    }

    return 0;
}