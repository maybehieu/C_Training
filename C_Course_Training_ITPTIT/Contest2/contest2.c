#include <stdio.h>

int main() {
	// your code goes here
	//Công thức hôn
    // int n,sum = 0,max = 0;
    // int vitri[1000];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &vitri[i]);
    // }
    // for (int a = 0; a < n - 2; a++)
    // {
    //     sum = vitri[a] + vitri[a + 1] + vitri[a + 2];
    //     if (sum > max)
    //     {
    //         max = sum;
    //     }
    // }
    // printf("%d", max);
    
    //Số chẵn chia 3
    // int n,check = 0;
    // int day[100];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &day[i]);
    // }
    // for (int j = 0; j < n; j++)
    // {
    //     if (day[j] % 3 == 0 && day[j] % 2 == 0)
    //     {
    //         printf("%d ", day[j]);
    //         check++;
    //     }
        
    // }
    // if (check == 0)
    // {
    //     printf("BJYXKSWL.");
    // }

    //Đấu giá
    // int n,vitri = 0;
    // long long gia[100000];
    // scanf("%d", &n);
    // long long max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%lld", &gia[i]);
    //     if (gia[i] > max)
    //     {
    //         max = gia[i];
    //         if (gia[i] == max)
    //         {
    //             vitri = i + 1;
    //         }
    //     }
    // }
    
    //Hụt hẫng
    // int bo,n,thieu,check;
    // int ngay[10000];
    // scanf("%d", &bo);
    // for (int p = 0; p < bo; p++)
    // {
    //     scanf("%d", &n);
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         scanf("%d", &ngay[i]);
    //     }
    //     int a = 0,b = 0,c = 0;
    //     check = 0;
    //     for (int j = 0; j < n - 2; j++)
    //     {
    //         a = ngay[j + 1];
    //         b = ngay[j];
    //         if (a - b != 1)
    //         {
    //             c = a - 1;
    //             printf("%d\n", c);
    //             check = 1;
    //         }
    //     }
    //     if (ngay[0] != 1 && check == 0)
    //     {
    //         printf("1\n");
    //     }
    //     else if ((ngay[n] - ngay[n - 1] != 1) && check == 0)
    //     {
    //         printf("%d\n", ngay[n - 2] + 1);
    //     }
    // }

    //Chữ số cuối cùng
    // long long bo,so,tach,s = 0;
    // scanf("%lld", &bo);
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%lld", &so);
    //     s = so;
    //     for (;s >= 10;)
    //     {
    //         s = 0;
    //         for (;so != 0;)
    //         {
    //             tach = so % 10;
    //             s += tach;
    //             so /= 10;
    //         }
    //         so = s;
    //     }
    //     printf("%lld\n", s);
    // }

    //Số đặc biệt
    // long long bo,so,sbd,tach,s = 0;
    // scanf("%lld", &bo);
    // for (int i = 0; i < bo; i++)
    // {
    //     scanf("%lld", &so);
    //     int check = 0;
    //     s = 0;
    //     sbd = so;
    //     for (;so != 0;)
    //     {
    //         tach = so % 10;
    //         s += tach;
    //         so /= 10;
    //     }
    //     for (int j = 2; j < s; j++)
    //     {
    //         if (s % j == 0)
    //         {
    //             check = 1;
    //         }
    //     }
    //     if (check == 0)
    //     {
    //         printf("%lld\n", sbd);
    //         check = 0;
    //     }
    //     else
    //     {
    //         printf("-1\n");
    //         check = 0;
    //     }
        
        
    // }

    
    //Đấu thầu
    // int bo,n,check = 0,a,b,vitri = 0,tong = 0,min;
    // int dauthau[200000];
    // int checkarr[200000];
    // scanf("%d", &bo);
    // while (bo--)
    // {
    //     scanf("%d", &n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", &dauthau[i]);
    //         checkarr[i] = 0;
    //     }
    //     int min = 900000;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (checkarr[i] == 1)
    //         {
    //             continue;
    //         }
    //         a = dauthau[i];
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             b = dauthau[j];
    //             if (a == b)
    //             {
    //                 checkarr[i] = 1;
    //                 checkarr[j] = 1;
    //             }
    //         }
    //         // printf("i:%d i+1:%d ", checkarr[i], checkarr[i + 1]);
    //         if (checkarr[i] != 1)
    //         {
    //             if (dauthau[i] < min)
    //             {
    //                 min = dauthau[i];
    //                 vitri = i + 1;
    //             }
    //         }
    //         // printf("check:%d ", checkarr[i]);
    //         //printf("min:%d ", min);
    //         //printf("vitri:%d ", vitri);
    //     }
    //     if (min == 900000)
    //     {
    //         printf("-1\n", vitri);
    //     }
    //     else
    //     {
    //         printf("%d\n", vitri);
    //     }
    // }
	return 0;
}
