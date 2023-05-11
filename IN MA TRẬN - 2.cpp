#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int a[45][45];
int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n, num = 1;
    cin >> n;
    for (int i = 1; i <= 4 * n; i++) 
    {
      for (int j = 1; j <= 4 * n; j++)
        a[i][j] = num++;
    }
    vector<int> roll2;
    int d = 1, size = 4 * n;
    while (1) 
    {
      for (int i = d; i <= size; i++)
        roll2.push_back(a[i][d]);
      for (int i = d + 1; i < size; i++)
        roll2.push_back(a[size][i]);
      for (int i = size - 1; i > d; i--)
        roll2.push_back(a[i][size - 1]);
      if (roll2.size() == 8 * n * n)
        break;
      for (int i = size - 2; i > d + 1; i--)
        roll2.push_back(a[d + 1][i]);
      d += 2, size -= 2;
    }
    reverse(roll2.begin(), roll2.end());
    for (int i = 0; i < roll2.size(); i++)
      cout << 4 * n * 4 * n - roll2[i] + 1 << " ";
    cout << "\n";
    for (auto c: roll2)
      cout << c << " ";
    cout << "\n";
  }
  return 0;
}