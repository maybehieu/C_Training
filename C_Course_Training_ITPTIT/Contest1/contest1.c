#include <stdio.h>
#include <math.h>

int main()
{
    //Công thức tối ưu
    // long long a,b,m,du;
    // scanf("%lld %lld %lld", &a, &b, &m);
    // du = (b / m - a / m) + 1;
    // if (a % m != 0)
    // {
    //     du = du - 1;
    //     printf("%lld", b - a + 1 - du);
    // }
    // else
    // {
    //     printf("%lld", (b - a) + 1 - du);
    // }

    //Số chính phương
    // double n;
    // int sqr;
    // scanf("%lf", &n);
    // sqr = sqrt(n);
    // if (n == 0)
    // {
    //     return 0;
    // }
    // else if (sqr * sqr == n)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("N0");
    // }

    //Bác Tiêu
    // long long so,x,y,z,m,sum;
    // scanf("%lld", &so);
    // x = so % 10;
    // y = (((so - x) / 10) % 10);
    // z = (((((so - x) / 10) - y) / 10) % 10);
    // m = (((((((so - x) / 10) - y) / 10) - z) / 10) % 10);
    // sum = x + y + z + m;
    // printf("%lld", sum);

    //MiHi tán gái
    // int a,b,c,d,e,f,g,h;
    // scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
    // if ((c - a) * (g - e) + (d - b) * (h - f) == 0)
    // {
    //     printf("1");
    // }
    // else
    // {
    //     printf("0");
    // }

    //Đếm ngày
    // int ngay,thang,nam;
    // scanf("%d %d %d", &ngay, &thang, &nam);
    // switch (thang)
    // {
    //     case 1:
    //     {
    //         if (ngay > 1 && ngay < 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         if (ngay == 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", 1, thang + 1, nam);
    //         }
    //         if (ngay == 1)
    //         {
    //             printf("%d %d %d\n\n", 31, 12, nam - 1);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         break;
    //     }
    //     case 12:
    //     {
    //         if (ngay > 1 && ngay < 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         if (ngay == 1)
    //         {
    //             printf("%d %d %d\n\n", 30, thang - 1, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         if (ngay == 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", 1, 1, nam + 1);
    //         }
    //         break;
    //     }
    //     case 3:
    //     {
    //         {
    //         if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
    //         {
    //             if (ngay > 1 && ngay < 31)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 1)
    //             {
    //                 printf("%d %d %d\n\n", 29, thang - 1, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 31)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", 1, thang + 1, nam);
    //             }
    //         }
    //         else
    //         {
    //             if (ngay > 1 && ngay < 31)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 1)
    //             {
    //                 printf("%d %d %d\n\n", 28, thang - 1, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 31)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", 1, thang + 1, nam);
    //             }
    //         }
    //             break;
    //     }
    //     }
    //     case 8:
    //     {
    //         if (ngay > 1 && ngay < 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         else if (ngay == 1)
    //         {
    //             printf("%d %d %d\n\n", 31, thang - 1, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         else if (ngay == 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", 1, thang + 1, nam);
    //         }

    //         break;
    //     }
    //     case 5: case 7: case 10:
    //     {
    //         if (ngay > 1 && ngay < 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         else if (ngay == 1)
    //         {
    //             printf("%d %d %d\n\n", 30, thang - 1, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         else if (ngay == 31)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", 1, thang + 1, nam);
    //         }

    //         break;
    //     }
    //     case 2:
    //     {
    //         if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
    //         {
    //             if (ngay > 1 && ngay < 29)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 1)
    //             {
    //                 printf("%d %d %d\n\n", 31, thang - 1, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 29)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", 1, thang + 1, nam);
    //             }
    //         }
    //         else
    //         {
    //             if (ngay > 1 && ngay < 28)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 1)
    //             {
    //                 printf("%d %d %d\n\n", 31, thang - 1, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //             else if (ngay == 28)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", 1, thang + 1, nam);
    //             }
    //         }
    //             break;
    //     }
    //     case 4: case 6: case 9: case 11:
    //     {
    //         if (ngay > 1 && ngay < 30)
    //         {
    //             printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //             printf("%d %d %d", ngay + 1, thang, nam);
    //         }
    //         else if (ngay == 1)
    //             {
    //                 printf("%d %d %d\n\n", 31, thang - 1, nam);
    //                 printf("%d %d %d", ngay + 1, thang, nam);
    //             }
    //         else if (ngay == 30)
    //             {
    //                 printf("%d %d %d\n\n", ngay - 1, thang, nam);
    //                 printf("%d %d %d", 1, thang + 1, nam);
    //             }
    //         break;
    //     }
    //     default:
    //     {
    //         break;
    //     }

    // }

    //Chemistry
    // long long n;
    // scanf("%lld", &n);
    // printf("%lld", n * n * (n + 1) / 2);

    //Lịch âm
    // char chu1,chu2;
    // scanf("%c%c", &chu1, &chu2);
    // int chu = (chu1 * 100) + chu2;
    // //printf("%lld", chu % 19);
    // if (chu % 19 == 0 || chu % 19 == 3 || chu % 19 == 6 || chu % 19 == 9 || chu % 19 == 11 || chu % 19 == 14 || chu % 19 == 17)
    // {
    //     printf("Yes");
    // }
    // else
    // {
    //     printf("No");
    // }

    //Tập vẽ
    // long long n,y;
    // double x,delta;
    // scanf("%lld", &n);
    // delta = 1 + 8 * n;
    // x = ((sqrt(delta) + 1)) / 2;
    // y = x;
    // if (y < x)
    // {
    //     printf("%lld", y + 1);
    // }
    // else
    // {
    //     printf("%lld", y);
    // }

    //Bi và Lema
    long long tien;
    scanf("%lld", &tien);

    if (tien % 4 == 0)
    {
        printf("Lema");
    }
    else if (tien % 4 == 1)
    {
        printf("Lema");
    }
    else if (tien % 4 == 2)
    {
        printf("Bi");
    }
    else if (tien % 4 == 3)
    {
        printf("Bi");
    }

    //Phân số
    // float N,D;
    // scanf("%f %f", &N, &D);
    // printf("%f", (N / D));

    //Tính diện tích tam giác
    // double a1,b,a2;
    // long long S;
    // //long long S;
    // scanf("%lf", &b);
    // a1 = ((b * b) - 4) / 4;
    // a2 = ((b * b) - 1) / 2;
    // long long x = a1;
    // long long y = a2;
    // if (b == 0 || a1 == 0 || a2 == 0)
    // {
    //     printf("Just only H.LighT can calculate this!");
    // }

    // else if (a1 - x == 0)
    // {
    //     S = (a1 * b) / 2.0;
    //     printf("%lld", S);
    // }
    // else if (a2 - y == 0)
    // {
    //     S = (a2 * b) / 2.0;
    //     printf("%lld", S);
    // }
    // else
    // {
    //     printf("Just only H.LighT can calculate this!");
    // }
}