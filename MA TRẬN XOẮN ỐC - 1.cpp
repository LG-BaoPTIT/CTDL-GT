#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n, m;
    cin >> n >> m;
    int a[n][m], b[m * n + 1];
    for (int i = 0; i < n; i++) 
    {
      for (int j = 0; j < m; j++) 
      {
        cin >> a[i][j];
      }
    }
    int row = n - 1, col = m - 1, h = n * m, d = 0, l1 = 0;
    while (d <= n / 2) 
    {
      for (int i = d; i <= col; i++) b[l1++] = a[d][i];
      if (l1 == h) break;
      for (int i = d + 1; i <= row; i++) b[l1++] = a[i][col];
      if (l1 == h) break;
      for (int i = col - 1; i >= d; i--) b[l1++] = a[row][i];
      if (l1 == h) break;
      for (int i = row - 1; i > d; i--) b[l1++] = a[i][d];
      if (l1 == h) break;
      d++, row--, col--;
    }
    for (int i = 0; i < m * n; i++)
      cout << b[i] << " ";
    cout << "\n";
  }
}