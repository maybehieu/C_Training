#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        char S[101] = {}, T[101] = {}, P[101] = {};
        char danhdauS[1000] = {}, danhdauT[1000] = {}, danhdauP[1000] = {};
        cin >> S >> T >> P;
        int i = 0;
        for (int j = 0; j < strlen(T); j++)
        {
            danhdauT[T[j]]++;
            if (T[j] == S[i])
            {
                danhdauS[S[i]]++;
                i++;
            }
        }
        if (i != strlen(S))
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < strlen(P); i++)
        {
            danhdauP[P[i]]++;
        }
        int check = 1;
        for (int i = 0; i < strlen(T); i++)
        {
            if (danhdauT[T[i]] > danhdauS[T[i]] + danhdauP[T[i]])
            {
                cout << "NO" << endl;
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}