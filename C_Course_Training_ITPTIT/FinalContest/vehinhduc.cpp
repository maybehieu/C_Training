#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    int arr[100][100];
    scanf("%d", &n);
    //tren
    // for (int i = 0; i < n; i++)
    // {
    //     a = 1;
    //     for (int j = i; j < n; j++)
    //     {
    //         arr[i][j] = a++;
    //         // printf("%d ", arr[i][j]);
    //     }
    //     // printf("\n");
    // }
    //duoi
    for (int i = n; i > 0; i--)
    {
        a = 5;
        for (int j = 0; j < n; j--)
        {
            arr[i][j] = a++;
            // printf("%d ", arr[i][j]);
        }
        // printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}