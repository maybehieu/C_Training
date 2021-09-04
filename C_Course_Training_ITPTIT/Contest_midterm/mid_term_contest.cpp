#include <stdio.h>

int main()
{
    //Cộng cộng cộng
    // long long n,check = 0;
    // scanf("%lld", &n);
    // for (int i = 1; i <= n; i++)
    // {
        
    //     if (n % i == 0)
    //     {
    //         check = check + i;
    //     }
    //     else
    //     {
    //         check = check;
    //     }
        
    // }
    // printf("%lld", check);

    //Nguyên tố
    // int bo,n,check,sntarr[100000],tong,so;
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     for (int i = 2; i <= n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             // check = 1;
    //             sntarr[i - 2] = i;
    //             //printf("%d ", i);
    //         }
            
    //     }
    //     tong = 0;
    //     so = 0;
    //     for (int i = 0; i <= n; i++)
    //     {
    //         if (n == sntarr[i])
    //         {
    //             printf("1\n");
    //         }
    //         tong = 0;
    //         for (int j = 0; j < n; j++)
    //         {
    //             tong = tong + sntarr[i];
    //             if (n == tong)
    //             {
    //                 so = so + 1;
    //             }
                
    //         }
    //         //printf("so:%d ", so);
            
    //         // printf("tong:%d ", tong);
        
    //         // printf("so:%d ", so);
    //     }
    //     printf("%d", so);
        
    // }

    //Bac tieu
    int n;
    scanf("%d", &n);
    if (n > 0 && n <= 20)
    {
        for (int i = 1; i < n; i++)
        {   
            for (int j = 0; j < i; j++)
            {
                if (j > 0 && j < i - 1)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            
            
            }
            printf("\n");
            if (i == n - 1)
            {
                for (int q = 0; q < n; q++)
                {
                    printf("* ");
                }
            }
        
    }
    }
    
    
    
    
    return 0;
}