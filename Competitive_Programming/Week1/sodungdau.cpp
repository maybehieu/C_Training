#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
void reset()
{
    for (int i = 0; i < 1000000; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int bo;
    scanf("%d", &bo);
    while (bo--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int check = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] <= arr[j])
                {
                    check = 0;
                    break;
                }
            }
            if (check == 1)
            {
                printf("%d ", arr[i]);
            } 
        }
        printf("%d\n", arr[n - 1]);
        reset();
    }
    
    return 0;
}