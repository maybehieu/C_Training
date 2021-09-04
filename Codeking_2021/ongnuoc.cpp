#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 12;
    int numberOfDivisors = 1;
    for (int i = 2; i <= num; i++)
    {
        int exponent = 0;
        while (num % i == 0)
        {
            exponent++;
            num /= i;
        }
        numberOfDivisors *= (exponent + 1);
    }
    cout << numberOfDivisors << endl;
    return 0;
}