#include <bits/stdc++.h>
using namespace std;
int m,n,arr[100][100];
void nhapmang(int arr[100][100])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] % 6 == 0 || arr[i][j] % 8 == 0)
            {
                
            }
            
        }
    }
}

int main()
{
    scanf("%d%d", &m, &n);
    nhapmang(arr);

    return 0;
}