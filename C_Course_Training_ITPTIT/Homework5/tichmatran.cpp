#include <bits/stdc++.h>
using namespace std;
int arr1[100][100],arr2[100][100],arr3[100][100],n,sum = 0;
void nhapmatran(int arr1[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
}
void tichmatran(int arr1[100][100], int arr2[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                arr3[i][j] = arr3[i][j] + (arr1[i][k] * arr2[k][j]);
            }
        }
    }
}
void xuatmatran(int arr3[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char enter;
    scanf("%d%d", &n, &n);
    nhapmatran(arr1);
    nhapmatran(arr2);
    tichmatran(arr1, arr2);
    xuatmatran(arr3);

    return 0;
}