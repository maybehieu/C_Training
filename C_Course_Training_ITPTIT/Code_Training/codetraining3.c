#include <stdio.h>
int main()
{
    //VD:nhập mảng có n phần tử bất kỳ
    //tiếp tục nhập số a,nếu số a xuất hiện trong mảng,in vị trí của a
    //nếu a không xuất hiện thì in -1
    // int n,so;
    // int arr[1000];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // scanf("%d", &so);
    // int check = 0;
    // for (int j = 0; j < n; j++)
    // {
    //     if (arr[j] == so)
    //     {
    //         printf("%d", j);
    //         check++;
    //     }
    // }
    // if (check == 0)
    // {
    //     printf("-1");
    // }
    
    //VD2:In ra các số có trong mảng từ 1 đến n và ngược lại
    // int n,so;
    // int arr[1000];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int a = 0; a < n; a++)
    // {
    //     printf("%d ", arr[a]);
    // }
    // printf("\n");
    // for (int b = n - 1; b >= 0; b--)
    // {
    //     printf("%d ", arr[b]);
    // }
    
    //VD3:Đổi chỗ giữa 2 số a và b
    
    //Cách 1:
    // int a,b,c;
    // scanf("%d%d", &a, &b);
    // c = a;
    // a = b;
    // b = c;
    // printf("%d %d", a, b);

    //Cách 2:
    // int a,b,sum;
    // scanf("%d%d", &a, &b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("%d %d", a, b);

    //Dãy Fibonacci
    int n;
    scanf("%d", &n);
    int dayFibo[1000];
    dayFibo[0] = 0;
    dayFibo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dayFibo[i] = dayFibo[i - 1] + dayFibo[i - 2];
    }
    printf("%d", dayFibo[n]);
}