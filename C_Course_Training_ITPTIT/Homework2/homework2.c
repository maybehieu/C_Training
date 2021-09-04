#include <stdio.h>
#include <math.h>



int main()
{
    //Kiểm tra học lực
    // double a,b,c,sum;
    // scanf("%lf %lf %lf", &a, &b, &c);
    // sum = (a + b + c) / 3;
    // if (sum < 5)
    // {
    //     printf("yeu");
    // }
    // if (sum >= 5 && sum < 6.5 )
    // {
    //     printf("trung binh");
    // }
    // if (sum >= 6.5 && sum < 8)
    // {
    //     printf("kha");
    // }
    // if (sum >= 8)
    // {
    //     printf("gioi");
    // }

    //Tìm số lớn nhất
    // long long a,b,c,d;
    // scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    // if (a == b || a == c || a == d || b == a || b == c || b == d || c == a || c == b || c == d || d == a ||d == b || d == c)
    // {
    //     printf("%lld", a);
    // }
    
    // if (a > b && a > c && a > d)
    // {
    //     printf("%lld", a);
    // }
    // if (b > a && b > c && b > d)
    // {
    //     printf("%lld", b);
    // }
    // if (c > a && c > b && c > d)
    // {
    //     printf("%lld", c);
    // }
    // if (d > a && d > b && d > c)
    // {
    //     printf("%lld", d);
    // }

    // //Tính tiền thuế
    // int tien;
    // float thue;
    // scanf("%d", &tien);   
    // if (tien == 0)
    // {
    //     printf("0");
    // }
    // else if (tien > 0 && tien < 10)
    // {
    //     thue = 0.01 * tien;
    //     float a = thue * 10;
    //     if (thue == (int)thue)
    //     {
    //         printf("%.0f", thue);
    //     }
    //     else if (a == (int)a)
    //     {
    //         printf("%.1f", thue);
    //     }
    //     else
    //     {
    //         printf("%.2f", thue);
    //     }
    // }
    // else if (tien >= 10 && tien < 20)
    // {
    //     thue = 0.03 * tien;
    //     float a = thue * 10;
    //     if (thue == (int)thue)
    //     {
    //         printf("%.0f", thue);
    //     }
    //     else if (a == (int)a)
    //     {
    //         printf("%.1f", thue);
    //     }
    //     else
    //     {
    //         printf("%.2f", thue);
    //     }
    // }
    // else if (tien >= 20 && tien < 100)
    // {
    //     thue = 0.05 * tien;
    //     float a = thue * 10;
    //     if (thue == (int)thue)
    //     {
    //         printf("%.0f", thue);
    //     }
    //     else if (a == (int)a)
    //     {
    //         printf("%.1f", thue);
    //     }
    //     else
    //     {
    //         printf("%.2f", thue);
    //     }
    // }
    
    
    
    
    
    
    //Tính tiền cước điện thoại
    // long long time,tien;
    // scanf("%lld", &time);
    // if (time > 0 && time <= 50)
    // {
    //     tien = time * 600;
    //     printf("%lld", tien);
    // }
    // if (time > 50 && time <= 150)
    // {
    //     tien = (50 * 600) + ((time - 50) * 400);
    //     printf("%lld", tien);
    // }
    // if (time > 150)
    // {
    //     tien = (50 * 600) + (100 * 400) + ((time - 150) * 200);
    //     printf("%lld", tien);
    // }


    //Giải phương trình bậc 2
    // long long a,b,c,x1,x2;
    // scanf("%lld %lld %lld", &a, &b, &c);
    // long long delta = (b * b) - (4 * a * c);
    // if (delta < 0 || a == 0)
    // {
    //     printf("null");
    // }
    // else if (delta == 0)
    // {
    //     x1 = (-b) / (2 * a);
    //     printf("%lld", x1);
    // }
    // else if (delta > 0)
    // {
    //     x1 = (-b + sqrt(delta)) / (a * 2);
    //     x2 = (-b - sqrt(delta)) / (a * 2);
    //     if (x1 > x2)
    //     {
    //         printf("%lld\n\n%lld", x1, x2);
    //     }
    //     else if (x2 > x1)
    //     {
    //         printf("%lld\n\n%lld", x2, x1);
    //     }
        
    // }

    //Check tam giác
    // int a,b,c;
    // scanf("%d %d %d", &a, &b, &c);
    // if (a + b <= c || a + c <= b || c + b <= a)
    // {
    //     printf("NO.");
    // }
    // else if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (b * b) + (c * c) == (a * a))
    // {
    //     printf("VUONG");
    // }
    // else if (a == b && a == c && b == c)
    // {
    //     printf("DEU");
    // }
    // else if (a == b || a == c)
    // {
    //     printf("CAN");
    // }
    // else if (b == a || b == c)
    // {
    //     printf("CAN");
    // }
    // else if (c == a || c == b)
    // {
    //     printf("CAN");
    // }
    // else if (a + b > c || a + c > b || c + b > a)
    // {
    //     printf("THUONG");
    // }
    // else
    // {
    //     printf("NO.");
    // }


    //Check ngay
    // int ngay,thang,nam;
    // scanf("%d %d %d", &ngay, &thang, &nam);
    // if (nam > 1900 && nam < 10000)
    // {
    //     switch (thang)
    // {
    //     case 1:case 3: case 5: case 7: case 8: case 10: case 12:
    //     {
    //         if (ngay >= 1 && ngay <= 31)
    //         {
    //             printf("YES");
    //         }
    //         else
    //         {
    //             printf("N0");
    //         }
    //         break;
    //     }
    //     case 2:
    //     {
    //         if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
    //         {
    //             if (ngay >= 1 && ngay <= 29)
    //             {
    //                 printf("YES");
    //             }
    //             else
    //             {
    //                 printf("N0");
    //             }
    //             break;
    //         }
    //         else
    //         {
    //             if (ngay >= 1 && ngay <= 28)
    //             {
    //                 printf("YES");
    //             }   
    //             else
    //             {
    //                 printf("N0");
    //             }
    //             break;
    //     }
    //     }
    //     case 4: case 6: case 9: case 11:
    //     {
    //         if (ngay >= 1 && ngay <= 30)
    //         {
    //             printf("YES");
    //         }
    //         else
    //         {
    //             printf("N0");
    //         }
    //         break;
    //     }
    //     default:
    //     {
    //         printf("N0");
    //         break;        
    //     }
        
    // }
    // }
    // else
    // {
    //     printf("N0");
    // }
    
    //Chuyển đổi độ F sang C step: 0.56
    // long long f;
    // double c;
    // scanf("%lld", &f);
    // c = (f - 32) * (5 / 9.0);
    // long long C = c;
    // if (c == C)
    // {
    //     printf("%lld", C);
    // }
    // else
    // {
    //     printf("%.2lf", c);
    // }
    

    //Kiểm tra chia hết
    // long long a,b,c;
    // scanf("%lld %lld %lld", &a, &b, &c);
    // if (a > 0 && b > 0 && c > 0)
    // {
    //     if (a % b == 0 && a % c == 0)
    //     {
    //         printf("YES");
    //     }
    //     else if (b % a == 0 && b % c == 0)
    //     {
    //         printf("YES");
    //     }
    //     else if (c % a == 0 && c % a == 0)
    //     {
    //         printf("YES");
    //     }
    //     else
    //     {
    //         printf("N0");
    //     }
    // }
    // else
    // {
    //     printf("N0");
    // }
    
    //Tính diện tích
    //Link: https://ideone.com/MkUKtz
    // int kieu;
    // double S,a,b,c;
    // const double pi  = 3.14;
    // scanf("%d", &kieu);
    // if (kieu == 1)
    // {
    //     scanf("%lf", &a);
    //     S = pi * a * a;
    //         int s = S;
    //         if (s == S)
    //         {
    //             printf("%d", s);
    //         }
    //         else
    //         {
    //             printf("%.2lf", S);
    //         }
        
    // }
    // else if (kieu == 2)
    // {
    //     scanf("%lf %lf", &a, &b);
    //     S = a * b;
    //     int s = S;
    //     if (s == S)
    //     {
    //         printf("%d", s);
    //     }
    //     else
    //     {
    //         printf("%.2lf", S);
    //     }
        
    // }
    // else if (kieu == 3)
    // {
    //     scanf("%lf %lf %lf", &a, &b, &c);
    //     if (a + b <= c || a + c <= b || c + b <= a)
    //     {
    //         printf("Nope");
    //     }
    //     else
    //     {
    //         double p;
    //         p = (a + b + c) / 2.0;
    //         S = sqrt(p * (p - a) * (p - b) * (p - c));
    //         int s = S;
    //         if (s == S)
    //         {
    //             printf("%d", s);
    //         }
    //         else
    //         {
    //             printf("%.2lf", S);
    //         }
            
    //     }
        
    // }
    // else
    // {
    //     return 0;
    // }
    
    
    

    
    
    
    
}