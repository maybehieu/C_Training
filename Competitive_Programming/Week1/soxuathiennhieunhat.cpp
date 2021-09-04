#include <bits/stdc++.h>
using namespace std;
int arr[1000000], n;
void check(int arr[1000000])
{
    int a = 1, b = arr[0], c = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            a++;
        }
        else
        {
            if (a > c)
            {
                c = a;
                b = arr[i];
            }
            a = 1;
        }
    }
    if (c > n / 2)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("NO\n");
    }
    
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        check(arr);
    }
    
    return 0;
}