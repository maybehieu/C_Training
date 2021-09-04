#include <stdio.h>
#include <math.h>

int main()
{
    //a.In từ 1 đến 10
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d", i);
    // }
    
    //b.In các số chẵn từ 1 đến 10
    
    //Cách 1:dùng if
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d", i);
    //     }
        
    // }

    //Cách 2:dùng bước nhảy
    // for (int i = 2; i <= 10; i+=2)
    // {
    //     printf("%d", i);
    // }
    
    //c.In các số lẻ từ 1 đến 10
    //Cách 1:dùng if
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d", i);
    //     }
        
    // }

    //Cách 2:dùng bước nhảy
    // for (int i = 1; i <= 10; i+=2)
    // {
    //     printf("%d", i);
    // }

    //VD:In hình vuông theo cạnh n cho trước
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    // do
    // {
    //     /* code */
    // } while (/* condition */);
    


    //Bài 1:Nhập số n,kiểm tra n có phải số nguyên tố hay không
    int n;
    int m = 0;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("V");
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("X");
            m = 1;
        }
    }
    if (m == 0)
    {
        printf("V");
    }

    //Sau tối ưu (căn n)
    // int n;
    // int m = 0;
    // scanf("%d", &n);
    // for (int i = 2; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         printf("X");
    //         m = 1;
    //     }
    // }
    // if (m == 0)
    // {
    //     printf("V");
    // }
    
    //Bài 1*:In các số nguyên tố từ 1 đến n
    // int n;
    // scanf("%d", &n);
    // for (int a = 2 ; a <= n ; a++)
    // {
    //     int m = 0;
    //     for (int i = 2; i <= sqrt(a); i++)
    //     {
    //         if (a % i == 0)
    //         {
    //             m = 1;
    //         }
    //     }
    //     if (m == 0)
    //     {
    //         printf("%d ", a);
    //     }
    // }
    

    //Bài 2:Vẽ hình tam giác vuông theo cạnh cho trước bằng dấu *
    // int n;
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int a = 0; a < i; a++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    





}