#include <iostream>

using namespace std;
const long long mod = 100000007;

long long dequy(int a, int b)
{
    if (b == 0)
        return 1;
    return a * dequy(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << dequy(a, b);
    return 0;
}
// long long mu(long long x, int k)
// {
//     if (k == 0)
//     {
//         return 1;
//     }
//     long long temp = mu(x, k / 2);
//     if (k % 2 == 1)
//     {
//         return (temp * temp * x) % mod;
//     }
//     return (temp * temp) % mod;
// }