#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,ans=0;
    cin >> n;
    vector<int>a(n);
    for (auto &c:a)
      cin >> c;
    sort(a.begin(),a.end());
    while (a[n-1]!=0)
    {
      for (int i=0; i<n; i++)
      {
        if (a[i]&1)
        {
          a[i]--;
          ans++;
        }
      }
      for (int i=0; i<n; i++)
        a[i]/=2;
      ans++;
    }
    cout << ans-1 << "\n";
  }
  return 0;
}
