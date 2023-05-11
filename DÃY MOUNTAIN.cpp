#include <bits/stdc++.h>
using namespace std;
bool isMountainRange (int l, int r, vector<int> a)
{
  if (r-l==0) return 1;
  int i=l+1, len=1;;
  while (i<=r && a[i]>=a[i-1])
  {
    i++;
    len++;
  }
  while (i<=r && a[i]<=a[i-1])
  {
    i++;
    len++;
  }
  return (r-l+1==len);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,l,r;
    cin >> n;
    vector<int> a(n);
    for (auto &c:a) cin >> c;
    cin >> l >> r;
    cout << (isMountainRange(l,r,a)?"Yes\n":"No\n");
  }
  return 0;
}