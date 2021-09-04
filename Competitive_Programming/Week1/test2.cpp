#include <bits/stdc++.h>
using namespace std;
int n, arr[1000000], temp[1000000];
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sapxeplonnho(int temp[1000000], int a)
{	
    for (int i = a; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
	    {
            if(temp[i] < temp[j])
            {
                Swap(temp[i], temp[j]);
            }
        }
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
            scanf("%d", arr[i], temp[i]);
        }
        for (int i = 0; i < n; i++)
        {
            //sapxeplonnho(temp, i);
            for (int k = i; k < n - 1; k++)
            {
                for (int j = k + 1; j < n; j++)
	            {
                    if(temp[k] < temp[j])
                    {
                        Swap(temp[k], temp[j]);
                    }
                }
            }
            if (temp[i] == arr[i])
            {
                printf("%d ", arr[i]);
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}