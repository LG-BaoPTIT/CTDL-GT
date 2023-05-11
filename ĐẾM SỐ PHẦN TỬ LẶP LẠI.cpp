#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+3;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, count[MAX], ans=0;
    memset(count,0,sizeof(count));
    cin >> n;
    vector<int> a(n);
    set<int> s;
    for (int i=0; i<n; i++)
    {
      cin >> a[i];
      count[a[i]]++;
      s.insert(a[i]);
    }
    set<int>::iterator itr;
    for (itr=s.begin(); itr!=s.end(); itr++)
      ans+=(count[*itr]>1?count[*itr]:0);
    cout << ans << "\n";
  }
  return 0;
}