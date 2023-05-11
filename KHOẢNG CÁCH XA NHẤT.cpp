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
    int n,ans=0;
    cin >> n;
    vector<int> a(n), right(n);
    for (auto &c:a)
      cin >> c;
    right[n-1]=a[n-1];
    for (int i=n-2; i>=0; i--)
      right[i]=max(a[i],right[i+1]);
    int i=0, j=0;
    while (i<n && j<n)
    {
      if (right[j]>=a[i])
      {
        ans=max(ans,abs(i-j));
        j++;
      }
      else
        i++;
    }
    cout << ans << "\n";
  }
  return 0;
}