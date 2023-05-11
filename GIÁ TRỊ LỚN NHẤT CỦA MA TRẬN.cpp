#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main() 
{
  ll n, res = INT_MIN;
  cin >> n;
  ll a[n + 1][n + 1], major[n + 1][n + 1], minor[n + 1][n + 1];
  memset(major, 0, sizeof(major));
  memset(minor, 0, sizeof(minor));
  for (ll i = 1; i <= n; i++) 
  {
    for (ll j = 1; j <= n; j++) 
    {
      cin >> a[i][j];
      major[i][j] = a[i][j] + major[i - 1][j - 1];
      minor[i][j] = a[i][j] + minor[i - 1][j + 1];
    }
  }
  for (ll i = 1; i < n; i++) 
  {
    for (ll j = 1; j < n; j++) 
    {
      for (ll k = 1; k <= n - max(i, j); k++) 
      {
        res = max(res, major[i + k][j + k] - major[i - 1][j - 1] - (minor[i + k][j] - minor[i - 1][j + k + 1]));
      }
    }
  }
  cout << res;
  return 0;
}