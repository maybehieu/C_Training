#include <bits/stdc++.h>
using namespace std;
int n,arr[10000000];
void sapxep(int arr[10000000])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int tmp = 0;
            if (arr[j] < arr[i])
            {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}
void inmang(int arr[10000000])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sapxep(arr);
    inmang(arr);
    return 0;
}