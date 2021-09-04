#include <bits/stdc++.h>
using namespace std;
int n,arr[100][100],cot,dong,check = 0;
void nhapmatran(int arr[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0)
            {
                dong = i;
                cot = j;
            }
        }
    }
}
void kiemtra(int arr[100][100])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][cot] == 1)
        {
            printf("Yes");
            check = 1;
            break;
        }
        else if (arr[dong][i] == 1)
        {
            printf("Yes");
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        printf("No");
    }
    
}
int main()
{
    scanf("%d", &n);
    nhapmatran(arr);
    kiemtra(arr);
    return 0;
}