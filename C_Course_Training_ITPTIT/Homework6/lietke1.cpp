#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
char s[1000];
int test,check[MAX];
// void sapxep(char s[1000])       <------------    thừa tại dùng mảng đánh dấu khi chạy for đã xuất ra
// {                                                theo thứ tự alphabet rồi
//     char x;
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] == x)
//         {
//             continue;
//         }
//         for (int j = i + 1; j < strlen(s); j++)
//         {
//             if (s[i] > s[j])
//             {
//                 x = s[i];
//                 s[i] = s[j];
//                 s[j] = x;
//             }
//         }
//     }
// }
void demchu(char s[1000])
{
    test = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        check[s[i]]++;
    }
    for (int i = 0; i < MAX; i++)
    {
        if (check[i] > 1)
        {
            printf("%c %d\n", i, check[i]);
            test = 1;
        }
    }
    if (test == 0)
    {
        printf("-1\n"); 
    }
}
void reset()
{
    for (int i = 0; i < strlen(s); i++)
    {
        check[s[i]] = 0;
    }
    test = 0;
}
int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        gets(s);
        // sapxep(s);   <------ thừa
        demchu(s);
        reset();
    }
    return 0;
}
    