#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bo;
    cin >> bo;
    while (bo--)
    {
        int check = 1;
        char chuoi[1000] = {};
        cin >> chuoi;
        for (int i = 0; i < strlen(chuoi); i++)
        {
            if (chuoi[i] == 'a' || chuoi[i] == 'i' || chuoi[i] == 'u' || chuoi[i] == 'e' || chuoi[i] == 'o' || chuoi[i] == 'n')
            {
                continue;
            }
            else
            {
                if (chuoi[i + 1] == 'a' || chuoi[i + 1] == 'i' || chuoi[i + 1] == 'u' || chuoi[i + 1] == 'e' || chuoi[i + 1] == 'o')
                {
                    continue;
                }
            }
            cout << "NO" << endl;
            check = 0;
            break;
        }
        if (check == 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}