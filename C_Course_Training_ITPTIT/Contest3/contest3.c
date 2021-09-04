#include <stdio.h>
#include <math.h>
// long long xepkhoai[10000000];
// long long arrkhoai[10000000];      //<-- đây là khoai nướng bro
int main()
{
    
    //Khoai nướng mùa đông
    // int bo,n;
    // long long a;
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%lld", &xepkhoai[i]);
    //         arrkhoai[i] = i;
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         a = arrkhoai[i];
    //         int m = 0;
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (xepkhoai[j] == a)
    //             {
    //                 m = 1;
    //                 xepkhoai[j] = -1;
    //                 break;
    //             }
    //         }
    //         if (m == 0)
    //         {
    //             arrkhoai[i] = -1;
    //         }
    //         // printf("%lld ", arrkhoai[i]);
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%lld ", arrkhoai[i]);
    //     }
    //     printf("\n");
    // }
    
    //Đếm nguyên tố
    // int arr[100][100],check[10000];
    // int bo,n,so,m,snt = 0,p,x;
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             scanf("%d", &arr[i][j]);
    //             check[i] = 0;
    //             check[j] = 0;
    //         }
    //     }
    //     p = 0;
    //     m = 0;
    //     for (int i = 0; i < n; i++)
    //     {
            
    //         for (int j = i; j < n; j++)
    //         {
    //             // printf("%d ", arr[i][j]);
    //             so = arr[i][j];
    //             x = 0;
    //             if (arr[i][j] == 1)
    //             {
    //                 continue;
    //             }
    //             if (arr[i][j] == 2 || arr[i][j] == 3)
    //             {
    //                 check[m] = arr[i][j];
    //                 m++,p++;
    //                 continue;
    //             }
    //             for (int q = 2; q <= sqrt(so); q++)
    //             {
    //                 if (so % q == 0)
    //                 {
    //                     x++;
    //                 }
    //             }
    //             if (x == 0)
    //             {
    //                 check[m] = so;
    //                 p++,m++;
    //             }
    //         }
    //     }
    //     for (int i = 0; i < p; i++)
    //     {
    //         // printf("%d ", check[i]);
    //         // printf(":%d ", p);
    //         x = 0;
    //         if (check[i] == -1)
    //         {
    //             continue;
    //         }
    //         for (int j = i + 1; j < p; j++)
    //         {
    //             if (check[i] == check[j])
    //             {
    //                 // check[i] = -1;
    //                 check[j] = -1;
    //                 x = 1;
    //             }
    //         }
    //         if (x == 1)
    //         {
    //             check[i] = -1;
    //         }
    //         if (check[i] != -1)
    //         {
    //             snt++;
    //         }
    //         // printf("%d ", check[i]);
    //     }
    //     printf("%d\n", snt);
    //     snt = 0;
        
    // }
    
    
    //Tính tổng
    // int n,tong;
    // int arr[900][900];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // tong = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         tong = tong + arr[i][j];
    //     }
    // }
    // printf("%d", tong);

    
    //Rút tiền ăn tết
    // int bo,n,tongto = 0;
    // int arr[10] = {1000,500,200,100,50,20,10,5,2,1};
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     while (n > 0)
    //     {
    //         for (int i = 0; i < 10; i++)
    //         {
    //             if (n >= arr[i])
    //             {
    //                 for (int j = 1; j > 0; j++)
    //                 {
    //                     n = n - arr[i];
    //                     tongto++;
    //                     if (n < arr[i])
    //                     {
    //                         break;
    //                     }
                        
    //                 }
    //             }
    //         }
    //     }
    //     printf("%d\n", tongto);
    //     tongto = 0;
    // }
    
    //Sắp xếp ma trận 2
    // int m,n,i;
    // int arr[100][100];
    // int arr2[10000];
    // scanf("%d%d%d", &m, &n, &i);
    // for (int a = 0; a < m; a++)
    // {
    //     for (int b = 0; b < n; b++)
    //     {
    //         scanf("%d", &arr[a][b]);
    //         if (b + 1 == i)
    //         {
    //             arr2[a] = arr[a][b];
    //         }
    //     }
    // }
    // for (int a = 0; a < m; a++)
    // {
    //     for (int b = a + 1; b < m; b++)
    //     {
    //         int c = 0;
    //         if (arr2[b] < arr2[a])
    //         {
    //             c = arr2[b];
    //             arr2[b] = arr2[a];
    //             arr2[a] = c;
    //         }
    //     }
    //     // printf("%d ", arr2[a]);
    // }
    // for (int a = 0; a < m; a++)
    // {
    //     for (int b = 0; b < n; b++)
    //     {
    //         if (b + 1 == i)
    //         {
    //             arr[a][b] = arr2[a];
    //         }
    //         printf("%d ", arr[a][b]);
    //     }
    //     printf("\n");
    // }
    
    
    
    
    //Thứ nhì
    // int bo,n,c,a;
    // int arr[10000];
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", &arr[i]);
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             c = 0;
    //             if (arr[j] < arr[i])
    //             {
    //                 c = arr[j];
    //                 arr[j] = arr[i];
    //                 arr[i] = c;
    //             }
    //         }
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d", arr[i]);
    //     } 
    // }
    
    //Trò chơi giảm giá
    // int m,n,c,d,cach;
    // int maxhang = 0,maxcot = 0;
    // int arr[100][100];
    // int hang[10000],cot[10000];
    // scanf("%d %d", &m, &n);
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //         //Tổng từng hàng
    //         hang[i] += arr[i][j];
    //         // cot[i] += arr[j][i];
    //     }
    // }
    // //Tổng cột
    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         cot[j] += arr[i][j];
    //     }
    // }
    // // for (int i = 0; i < n; i++)
    // // {
    // //     printf("%d ", hang[i]);
    // //     printf("%d ", cot[i]);
    // // }
    // // printf("\n");
    // maxhang = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     //max hàng
    //     if (maxhang < hang[i])
    //     {
    //         maxhang = hang[i];
    //         c = i;
    //     }
    //     // printf("%d ", maxhang);
    //     // printf("%d\n", c);
    // }
    // // printf("\n");
    // maxcot = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     //max cột
    //     if (maxcot < cot[i])
    //     {
    //         maxcot = cot[i];
    //         d = i;
    //     }
    //     // printf("%d ", maxcot);
    //     // printf("%d\n", d);
    // }
    
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cach = 0;
    //         if (i == c || j == d)
    //         {
    //             cach = 1;
    //             continue;
    //         }
    //         printf("%d ", arr[i][j]);
    //     }
    //     if (cach != 0)
    //     {
    //         printf("\n");
    //     }
        
    // }

    //Học chung
    int bo,n,k,x,y,min = 1000000000,a,b;
    int arr[10000];
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d%d", &n, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    c = arr[i];
                    arr[i] = arr[j];
                    arr[j] = c;
                }
            }
            for (int j = i + 1; j < n; j++)
            {
                x = arr[i] + arr[j];
                y = abs(x - k);
                if (y < min)
                {
                    min = y;
                    a = arr[i];
                    b = arr[j];
                }
                printf("%d %d", a, b);
            }
            
        }
        
    }
    
    
    
    return 0;
}   