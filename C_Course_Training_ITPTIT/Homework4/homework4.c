#include <stdio.h>
#include <math.h>
// long long room1[10^7],room2[10^7],room3[10^7];  <---- arr thuộc //cách ly
int main()
{
    //Chèn phần tử vào mảng
    // int n,so,stt;
    // int arr1[1000],arr2[1000];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr1[i]);
    // }
    // scanf("%d", &so);
    // scanf("%d", &stt);
    // for (int i = n + 1; i >= stt + 1; i--)
    // {
    //     arr1[i] = arr1[i - 1]; 
    // }
    // arr1[stt] = so;
    // for (int j = 0; j < n + 1; j++)
    // {
    //     printf("%d ", arr1[j]);
    // }
    
    //Bình phương
    // int bo,sqr[1000],n,check = 0;
    // double so;
    // double dayso[1000];
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     check = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         sqr[i] = 0;
    //         scanf("%lf", &dayso[i]);
    //         sqr[i] = sqrt(dayso[i]);
    //         if (sqr[i] * sqr[i] == dayso[i])
    //         {
    //             check++;
    //         }
            
    //     }
    //     printf("%d\n", check);
    // }
    
    //Chèn mảng vào mảng
    // int n,stt1,stt2;
    // int arr1[30000], arr2[30000];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr1[i]);
    //     //printf("%d", &arr1[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr2[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d ", arr1[i], arr2[i]);
    // }
    
    //Tìm phần tử
    // int m,n,arr1[1000],arr2[1000],stt = 0,checkarr[10000],a,b,c;
    // scanf("%d", &m);
    // for (int i = 0; i < m; i++)
    // {
    //     scanf("%d", &arr1[i]);
    // }
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr2[i]);
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     if (checkarr[i] == 1)
    //     {
    //         continue;
    //     }
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             checkarr[i] = 1;
    //         }
    //     }
    // }
    // c = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     if (checkarr[i] != 1)
    //     {
    //         printf("%d ", arr1[i]);
    //         c = 1;
    //     }
        
    // }
    // if (c == 0)
    // {
    //     printf("-1");
    // }
    


    //Tổng các phần tử lớn nhất
    // int bo,k,arr[10000],max1,max2,max3,tong,a,b,c;
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &k);
    //     tong = 0;
    //     max1 = -1;
    //     max2 = -1;
    //     max3 = -1;
    //     a = 0;
    //     b = 0;
    //     for (int i = 0; i < k; i++)
    //     {
    //         scanf("%d", &arr[i]);
    //     }
    //     for (int i = 0; i < k; i++)
    //     {
    //         if (arr[i] > max1)
    //         {
    //             max1 = arr[i];
    //             a = i;
    //         }
    //     }
    //     printf("%d ", max1);
    //     for (int i = 0; i < k; i++)
    //     {
    //         if (arr[i] > max2 && arr[i] <= max1 && i != a)
    //         {
    //             max2 = arr[i];
    //             b = i;
    //         }
    //     }
    //     printf("%d ", max2);
    //     for (int i = 0; i < k; i++)
    //     {
    //         if (arr[i] > max3 && arr[i] <= max2 && arr[i] <= max1 && i != a && i != b)
    //         {
    //             max3 = arr[i];
    //         } 
    //     }
    //     printf("%d ", max3);
    //     tong = max1 + max2 + max3;
    //     printf("%d\n", tong);
    // }

    //Xóa phần tử
    // int n,k,check,a;
    // int arr[30000];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // scanf("%d", &k);
    // check = 0;
    // a = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] % k == 0 && check == 0)
    //     {
    //         check++;
    //         a = i;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (check != 0)
    //     {
    //         if (i == a)
    //         {
    //             continue;
    //         }
    //         printf("%d ", arr[i]);
    //     }
    //     if (check == 0)
    //     {
    //         printf("-1");
    //         break;
    //     }
        
    // }
    
    //Sắp xếp các phần tử
    // int arr[10000],c;
    // for (int i = 0; i < 20; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < 20; i++)
    // {
    //     c = 0;
    //     for (int j = i + 1; j < 20; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             c = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    // for (int i = 19; i >= 10; i--)
    // {
    //     printf("%d ",arr[i]);
    // }
    
    //Zero
    // int bo,n;
    // int arr[100];
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
    //         if (arr[i] < 0)
    //         {
    //             arr[i] = 0;
    //         }
    //         printf("%d ", arr[i]);
    //     }
    //     printf("\n");
    // }
    
    //Intergers of Float?
    // int bo,n,a,x;
    // float c;
    // float arr[1000];
    // float arr2[1000];
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     a = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%f", &arr[i]);
    //         if (arr[i] != (int)arr[i])
    //         {
    //             a++;
    //             arr2[a - 1] = arr[i];
    //             arr[i] = 100000000;
    //         }
    //     }
    //     // for (int i = 0; i < a; i++)
    //     // {
    //     //     printf("%g ", arr2[i]);
    //     // }
    //     // printf("\n");
    //     for (int i = 0; i < n; i++)
    //     {
    //         c = 0;
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[i] > arr[j])
    //             {
    //                 c = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = c;
    //             }
    //         }
    //         if (arr[i] == 100000000)
    //         {
    //             continue;
    //         }
    //         printf("%g ",arr[i]);
    //     }
    //     for (int i = 0; i < a; i++)
    //     {
    //         c = 0.0;
    //         for (int j = 0; j < a; j++)
    //         {
    //             if (arr2[i] < arr2[j])
    //             {
    //                 c = arr2[i];
    //                 arr2[i] = arr2[j];
    //                 arr2[j] = c;
    //             }
    //         }
    //     }
    //     for (int i = a - 1; i >= 0; i--)
    //     {
    //         printf("%g ", arr2[i]);
    //     }
    //     printf("\n");
    // }


    //Tập đếm
    // int n,k,dem;
    // int arr[100000];
    // scanf("%d%d", &n, &k);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // dem = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == k)
    //     {
    //         dem++;
    //     }
        
    // }
    // printf("%d", dem);

    //Prime search
    // int bo,n,check;
    // int arr[10000];
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     check = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", &arr[i]);
    //         if (arr[i] == 1)
    //         {
    //             continue;
    //         }
    //         for (int j = 2; j <= sqrt(arr[i]); j++)
    //         {
    //             if (arr[i] % j == 0)
    //             {
    //                 arr[i] = 0;
    //             }
    //             // printf("%d ", arr[i]);
    //         }
    //         if (arr[i] != 0)
    //         {
    //             printf("%d ", arr[i]);
    //             check = 1;
    //         }
    //     }
    //     if (check == 0)
    //     {
    //         printf("-1");
    //     }
    //     printf("\n");
    // }
    

    //Cách ly
    // int n,num1 = 0,num2 = 0,num3 = 0;
    // long long temp;
    // scanf("%d", &n);
    // if (n == 0)
    // {
    //     printf("Room 1: Empty!\nRoom 2: Empty!\nRoom 3: Empty!");
    // }
    // else if (n != 0)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%lld", &temp);
    //         if (temp > 0)
    //         {
    //             room1[num1] = temp;
    //             num1++;
    //         }
    //         else if (temp == 0)
    //         {
    //             num2++;;
    //         }
    //         else if (temp < 0)
    //         {
    //             room3[num3] = temp;
    //             num3++;
    //         }
    //     }
    //     printf("Room 1: ");
    //     if (num1 == 0)
    //     {
    //         printf("Empty!");
    //     }
    //     else
    //     {
    //         for (int i = 0; i < num1; i++)
    //         {
    //             if (num1 == 0)
    //             {
    //                 printf("Empty!");
    //                 break;
    //             }
    //             else
    //             {
    //                 printf("%lld ", room1[i]);
    //             }
    //         }
    //     }
    //     printf("\nRoom 2: ");
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (num2 == 0)
    //         {
    //             printf("Empty!");
    //             break;
    //         }
    //         else if (num2 == 1)
    //         {
    //             printf("1 person");
    //             break;
    //         }
    //         else
    //         {
    //             printf("%d people", num2);
    //             break;
    //         }
    //     }
    //     printf("\nRoom 3: ");
    //     if (num3 == 0)
    //     {
    //         printf("Empty!");
    //     }
    //     else
    //     {
    //         for (int i = 0; i < num3; i++)
    //         {
    //             if (num3 == 0)
    //             {
    //                 printf("Empty!");
    //                 break;
    //             }
    //             else
    //             {
    //                 printf("%lld ", room3[i]);
    //             }
    //         }
    //     }
    // }
    
        

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}