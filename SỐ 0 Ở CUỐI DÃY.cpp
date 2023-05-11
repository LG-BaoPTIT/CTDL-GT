#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, zero=0;
    long long x;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
      cin >> x;
      zero+=(x==0?1:0);
      if (x!=0) cout << x << " ";
    }
    for (int i=1; i<=zero; i++)
      cout << 0 << " ";
    cout << "\n";
  }
  return 0;
}