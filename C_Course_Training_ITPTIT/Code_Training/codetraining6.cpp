#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char s[4];
    // // scanf("%s", &s);
    // // gets(s);
    // fgets(s, 6, stdin);
    // // printf("%s", s);
    // puts(s);
    
    //nhập vào 1 xâu, in ra từng phần tử và cách nhau bởi dấu cách
    // char str[10];
    // gets(str);
    // for (int i = 0;  ; i++)
    // {
    //     if (str[i] == '\0')
    //     {
    //         break;                           /*<---- cách này đúng*/
    //     }
    //     printf("%c", str[i]);
    //     printf(" ");
    // }
    // for (int i = 0;str[i] == '\0'; i++)
    // {
    //     printf("%c", str[i]);                   /*<---- cách này đúng*/
    //     printf(" ");
    // }
    //////////
    // int i = 0;
    // while (i++)
    // {
    //     if (str[i] == '\0')
    //     {
    //         break;
    //     }                                <--- cách này sai
    //     printf("%c", str[i]);
    //     printf(" ");
    // }
    
    //nhập 2 chuỗi a,b
    char s1[1000],s2[1000];
    gets(s1);
    gets(s2);
    //a.In ra độ dài chuỗi
    // int len1,len2;
    // len1 = strlen(s1);
    // len2 = strlen(s2);
    // printf("%d\n%d", len1,len2);

    //b.đổi chuỗi a thành in hoa,b thành in thường
    // strupr(s1);
    // strlwr(s2);
    // puts(s1);
    // puts(s2);
    
    //c.so sánh 2 chuỗi,nếu a < b nối b vào a hoặc nối a vào b nếu a >= b
    if (strcmp(s1, s2) >= 0)
    {
        strcat(s2, s1);
        puts(s2);
    }
    else
    {
        strcat(s1, s2);
        puts(s1);
    }
    
    return 0;
}