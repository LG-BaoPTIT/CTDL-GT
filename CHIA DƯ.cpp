#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+5;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a,m, ok=0;
    cin >> a >> m;
    for (int x=0; x<m; x++)
    {
      if ((a*x)%m==1)
      {
        ok=1;
        cout << x << "\n";
        break;
      }
    }
    if (!ok) cout << -1 << "\n";
  }
  return 0;
}