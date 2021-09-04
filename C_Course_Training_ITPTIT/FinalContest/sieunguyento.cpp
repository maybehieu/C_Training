#include <bits/stdc++.h>
using namespace std;
int isPrime(long long n)
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
void tongngto()
{

}
int main()
{
    int bo;
    scanf("%d", &bo);
    long long n;
    while (bo--)
    {
        scanf("%lld", &n);\
        if (isPrime(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    
    
    return 0;
}