#include <stdio.h>

int main()
{
    //mang 2 chieu
    // int m,n,so;
    // int arr[100][100];
    // //scanf("%d%d", &m, &n);
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //cong ma tran
    // int m,n;
    // int arr1[100][100];
    // int arr2[100][100];
    // int arr[100][100];
    // scanf("%d%d", &m, &n);
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &arr1[i][j]);
    //     }
        
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &arr2[i][j]);
    //     }
        
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = arr1[i][j] + arr2[i][j];
    //         printf("%d ", arr[i][j]);
    //         //printf("%d ", arr1[i][j] + arr2[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //Sap xep chen
    int n,a,b;
    float c;
    float arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%g", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        //a = arr[i];
        c = 0;
        for (int j = i + 1; j < n; j++)
        {
            //b = arr[j];
            if (arr[i] > arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
            
        }
        printf("%g ", arr[i]);
    }
    
}