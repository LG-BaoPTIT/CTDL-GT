#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    for (int i=1; i<=n; i++)
    {
      for (int j=1; j<=m; j++)
        cin >> a[i][j];
    }
    vector<vector<int>> v;
    v.resize(n+m+10);
    for (int i=1; i<=n; i++)
    {
      for (int j=1; j<=m; j++)
        v[i+j].push_back(a[i][j]);
    }
    for (int i=2; i<=n+m; i++)
    {
      if (i%2==0)
        reverse(v[i].begin(),v[i].end());
    }
    for (int i=2; i<=n+m; i++)
    {
      for (int j=0; j<v[i].size(); j++)
        cout << v[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}