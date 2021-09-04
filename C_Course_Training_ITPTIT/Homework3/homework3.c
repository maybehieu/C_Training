#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    //Vẽ hình 1
    // int n,m;
    // int cach = 0;
    // scanf("%d", &n);
    // for ( m = 0; m < n; m++)
    // {
        
    //     for (int a = 0; a < cach; a++)
    //     {
    //         printf(" ");
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("*");
    //         if (i == n - 1)
    //         {
    //             printf("\n\n");
    //             cach = cach + 1; 
    //         }
            
    //     }
        
    // }

    //Vẽ hình 2
    // int n;
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     //for sẽ chạy check để in dấu cách đầu tiên,sau khi hoàn thành chuyển xuống for dưới
    //     for (int a = i; a <= n - 1; a++)
    //     {
    //         printf(" ");
    //     }
    //     //for chạy để in dấu *,do dòng dưới luôn có số sao bằng dòng trên + 2 => công thức tổng cuối = 2n - 1
    //     for (int b = 1; b <= i * 2 - 1; b++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n\n");
        
    // }
    
    //Vẽ hình 4
    // int n,a,i;
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     for (a = i; a > 1; a--)
    //     {
    //         printf("%d", a);
    //     }
    //     for (a = 1; a <= (n-i + 1); a++)
    //     {
    //         printf("%d", a);
    //     }
    //     printf("\n");
    // }


    //Vẽ hình 3
    // int n,a,b;
    // scanf("%d", &n);
    // for ( a = 1; a <= n - 1; a++)
    // {
    //     for ( b = a; b < n; b++)
    //     {
    //         printf(" ");
    //     }
    //     for ( b = 1; b <= (2 * a - 1); b++)
    //     {   
    //         if (b == 1 || b == 2 * a - 1)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }  
    //     printf("\n");
    // }
    // for (int i = 1; i <= (1 + 2 * (n) ) ; i++)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             printf("* ");
    //         }
    //     }

    //Vẽ hình 5
    // int n;
    // scanf("%d", &n);
    // for (int i = 0; i < 2 * n - 1; i++)
    // {
    //     int k = i;
    //     if (k < n)
    //     {
    //         k = i;
    //     }
    //     else
    //     {
    //         k = 2 * (n - 1) - i;
    //     }
    //     for (int j = 0; j < k; j++)
    //     {
    //         printf("%d", n - j);
    //     }
    //     for (int j = 0; j < 2 * (n - k) - 1; j++)
    //     {
    //         printf("%d", n - k);
    //     }
    //     for (int j = k - 1; j >= 0; j--)
    //     {
    //         printf("%d", n - j);
    //     }
    //     printf("\n");
    // }
    



    //Đếm số nguyên tố
    int bo,x,y;
    int m = 0, snt = 0;
    scanf("%d", &bo);
    for (int i = 1; i <= bo; i++)
    {
        scanf("%d %d", &x, &y);
        for (int a = x; a <= y; a++)
        {
            m = 0;
            for (int b = 2; b <= sqrt(a); b++)
            {
                if (a % b == 0)
                {
                    m++;
                }
                
            }
            if (m == 0)
            {
                snt++;
            }
        }
        printf("%d\n", snt);
        snt = 0;

    }
    //Giai thừa
    // int bo,n;
    // long long m;
    // scanf("%d", &bo);
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%d", &n);
    //     m = 1;
    //     for (int a = 1; a <= n; a++)
    //     {
    //         m = m * a;
    //     }
    //     printf("%lld\n", m);
    // }
    
    //Số ước
    // int bo,n;
    // scanf("%d", &bo);
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%d", &n);
    //     int dem = 0;
    //     for (int a = 1; a <= n; a++)
    //     {
    //         if (a == 1)
    //         {
    //             dem = 1;
    //         }
    //         else if (n % a == 0)
    //         {
    //             dem = dem + 1;
    //         }
    //     }
    //     printf("%d\n", dem);
    //     for (int b = 1; b <= n; b++)
    //     {
    //         if (n % b == 0)
    //         {
    //             printf("%d ", b);
    //         }
            
    //     }
    //     printf("\n");
        
    // }
    
    //Số thuận nghịch
    // int bo,n,dem = 0;
    // scanf("%d", &bo);
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%d", &n);
    //     int snd = 0;
    //     int m = n;
    //     while (m > 0)
    //     {
    //         snd = snd * 10 + m % 10;
    //         m /= 10;
    //     }
    //     if (snd == n)
    //         {
    //             printf("YES\n");
    //         }
    //     else
    //     {
    //         printf("NO\n");
    //     }
        
    // }
    
    //Số hoàn hảo
    // int bo,n;
    // scanf("%d", &bo);
    // for (int a = 0; a < bo; a++)
    // {
    //     int tong = 0;
    //     scanf("%d", &n);
    //     for (int i = 1; i <= n / 2; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             tong+=i;
    //         }
        
    //     }   
    //     if (tong == n)
    //     {
    //         printf("YES\n");
    //     }
    //     else if (tong != n)
    //     {
    //         printf("NO\n");
    //     }
    // }
    
    
    //Đếm số chính phương
    // int bo;
    // double a,b;
    // scanf("%d", &bo);
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%lf %lf", &a, &b);
    //     int sqr,dem = 0;
    //     for ( a; a <= b; a++)
    //     {
    //         sqr = sqrt(a);
    //         if (sqr * sqr == a)
    //         {
    //             dem++;
    //         }        
    //     }
    //     printf("%d\n", dem);   
    // }
    
    //Tính lãi(dễ)
    // int bo,gui,nam;
    // double lai;
    // scanf("%d", &bo);
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%d %lf %d", &gui, &lai, &nam);
    //     float tong = gui * lai * nam / 100.0;
    //     float a = tong * 10.0;
    //     if (tong == (int)tong)
    //     {
    //         printf("%.0f\n", tong);
    //     }
    //     else if (a == (int)a)
    //     {
    //         printf("%.1f\n", tong);
    //     }
    //     else
    //     {
    //         printf("%.2f\n", tong);
    //     }
        
    // }
    
    //Bảng cửu chương
    // int n,nhan,i = 1;
    // scanf("%d", &n);
    // while (i <= 10)
    // {
    //     nhan = n * i;
    //     printf("%d * %d = %d\n", n, i, nhan);
    //     ++i;
    // }
    
    //Lãi khó
    // int bo,gui,nam,time;
    // double lai,result = 1;
    // scanf("%d", &bo);
    // time = 12 * nam;
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%d %lf %d", &gui, &lai, &nam);
    //     float tinhlai = (1 + (lai / 100.0));
    //     for (int a = tinhlai; a <= time; a++)
    //     {
    //         result *= tinhlai;
    //     }
    //     float tong = gui * result;
    //     float check = tong * 10.0;
    //     if (tong == (int)tong)
    //     {
    //         printf("%.0lf\n", tong);
    //     }
    //     else if (check == (int)check)
    //     {
    //         printf("%.1lf\n", tong);
    //     }
    //     else
    //     {
    //         printf("%.2lf\n", tong);
    //     }
        
    // }
    
    //Đàn thỏ
    // int bo;
    // scanf("%d", &bo);
    // for (int i = 0; i < bo; i++)
    // {
        
    // }
    
    
}