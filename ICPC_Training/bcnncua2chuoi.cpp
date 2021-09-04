#include <bits/stdc++.h>
using namespace std;
int LCM(int a, int b)
{
    int hcf, lcm;
    hcf = __gcd(a, b);
    lcm = (a * b) / hcf;
    return lcm;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        char s1[1001] = {}, s2[1001] = {}, temp[1001];
        cin >> s1 >> s2;
        int a = strlen(s1), b = strlen(s2);
        int soBcnn = LCM(a, b), dem;
        dem = soBcnn / a;
        strcpy(temp, s1);
        while (dem > 1)
        {
            char temp1[1001] = {};
            strcpy(temp1, temp);
            strcat(s1, temp1);
            dem--;
        }
        // cout << s1 << endl;
        dem = soBcnn / b;
        strcpy(temp, s2);
        while (dem > 1)
        {
            char temp1[1001] = {};
            strcpy(temp1, temp);
            strcat(s2, temp1);
            dem--;
        }
        // cout << s2 << endl;
        if (strcmp(s1, s2) == 0)
        {
            cout << s1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}