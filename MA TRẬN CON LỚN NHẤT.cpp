#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int a[505][505], dp[505][505];
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,m,ans=0;
    cin >> n >> m;
    memset(dp,0,sizeof(dp));
    for (int i=1; i<=n; i++)
    {
      for (int j=1; j<=m; j++)
      {
        cin >> a[i][j];
        dp[i][j]=a[i][j];
      }
    }
    for (int i=1; i<=n; i++)
    {
      for (int j=1; j<=m; j++)
      {
        if (a[i][j])
        {
          if (a[i][j]==a[i][j-1] && a[i][j]==a[i-1][j] && a[i][j]==a[i-1][j-1])
          {
            dp[i][j]=min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]})+1;
            ans=max(ans,dp[i][j]);
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
