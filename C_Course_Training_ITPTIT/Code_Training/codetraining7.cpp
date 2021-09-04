#include <bits/stdc++.h>
using namespace std;
int arr[1000];                     //khai báo mảng arr toàn cục để sử dụng cho toàn chương trình
int a,b;
// dùng hàm con tính tổng 2 số a,b
void congso1(int a, int b)         //trong hàm con congso(int a, int b),a và b chỉ là khởi tạo 2 giá trị
{                                  //int để hàm con congso sử dụng để tính toán,giá trị sẽ được lấy khi
    printf("%d", a + b);           //congso được gọi trong main()
}
int congso2(int a, int b)
{
    return a + b;
}
void nhapmang(int n)
{
    for (int i = 0; i < n; i++)     //nhập mảng
    {
        scanf("%d", &arr[i]);
    }
}
void inmang(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void demnguyento(int n)
{
    int dem = 0;
    for (int i = 0; i <= n; i++)
    {
        if (isPrime(i))
        {
            dem++;
        }
    }
    printf("%d", dem);
}
void swap(int a, int b)        //truyền tham chiếu
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    //tính tổng 2 số
    // int x,y;                        //trong hàm main thì khai báo 2 biến kiểu gì cũng được
    // scanf("%d%d", &x, &y);
    // congso1(x,y);
    // printf("\n%d", congso2(x,y));

    //nhập mảng ký tự,in ra mảng đó dùng hàm con
    // int n;
    // scanf("%d", &n);
    // nhapmang(n);
    // inmang(n);

    //nhập vào n từ bàn phím,đếm các số nguyên tố từ 1 đến n bằng hàm con
    // int n;
    // scanf("%d", &n);
    // demnguyento(n);

    //nhập a,b đổi chỗ a,b và in ra bằng hàm con(vd của truyền tham chiếu)
    scanf("%d%d", &a, &b);
    swap(a,b);
    printf("%d %d", a, b);
    return 0;
}