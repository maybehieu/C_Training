#include <bits/stdc++.h>
using namespace std;
int arr[1000][100];
void In(int soDong, int soCot)
{
   int dong = soDong - 1, cot = soCot - 1;
   int i = 0, j = 0;
   int dem = 0;

   while (dem != soDong * soCot)
   {
      for (int k = j; k <= cot; k++)
         cout << arr[i][k] << '\t';
      i++;
      for (int k = i; k <= dong; k++)
         cout << arr[k][cot] << '\t';
      ;
      cot--;
      for (int k = cot; k >= j; k--)
         cout << arr[dong][k] << '\t';
      ;
      dong--;
      for (int k = dong; k >= i; k--)
         cout << arr[k][j] << '\t';
      ;
      j++;

      dem++;
   }
}
int main()
{
   int n, m;
   cin >> n >> m;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> arr[i][j];
      }
   }
   In(n, m);
   return 0;
}