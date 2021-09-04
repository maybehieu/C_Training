#include <stdio.h>
#include <algorithm>
int main()
{
    int bo,n,check,tong,so,sntarr[100000],ketqua = 0;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d", &n);
        //check so nguyen to tu 1 den n
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                sntarr[i - 2] = i;
            }
        }
        tong = 0;
        so = 0;
        for (int i = 0; i <= n - 2; i++)
        {
            if (n == sntarr[i])
            {
                ketqua = 1;
            }
            // for (int q = 0; q < n; q++)
            // {
                
            // }
            // else
            // {
            //     ketqua = 3;
            //     tong = tong + sntarr[i];
            //     so = so + 1;
            // }
            
            
        }
        
    }
    if (ketqua == 1)
    {
        printf("1\n");
    }
    if (ketqua == 3)
    {
        printf("%d", so);
    }
    

    //nghich the
    // int n,arr[100000],check = 0,a,b;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // check = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     a = arr[i];
    //     for (int q = i + 1; q < n; q++)
    //     {
    //         b = arr[q];
    //         if (q > i && a > b)
    //         {
    //             check++;
    //         }
    //     }
        
        
        
    // }
    // printf("%d", check);


}