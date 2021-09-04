#include <stdio.h>
#include <algorithm>
int main()
{
    //sắp xếp
    // int n;
    // float c;
    // float arr[1000];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%f", &arr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     c = 0.0;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] < 10.0)
    //         {
    //             if (arr[i] > arr[j])
    //             {
    //                 c = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = c;
    //             }
    //         }
    //         else if (arr[i] >= 10.0)
    //         {
    //             if (arr[i] < arr[j])
    //             {
    //                 c = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = c;
    //             }
    //         }
    //     }
    //     printf("%g ", arr[i]);
    // }

    //vẽ hình kiểu wtf(hình vuông có cạnh chéo)
    // int n;
    // scanf("%d", &n);
    // for (int i = 0; i < n - 1; i++)
    // {   
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == n || i == 1 || j == n || j == 1)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     // for (int i = n - 1; i > 1; i--)
    //     // {
    //     //     printf("*");
    //     // }
    //     // printf("* ");
    //     printf("\n");
    // }
    
    //sort
    int n;
    scanf("%d", &n);
    printf("%d", sort(1,n));


    


















}