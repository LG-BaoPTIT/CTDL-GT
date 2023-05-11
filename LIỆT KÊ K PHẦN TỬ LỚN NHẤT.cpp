#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define i64 long long
int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto & c: a)
      cin >> c;
    sort(a.begin(),a.end());
    for (int i=n-1; i>n-1-k; i--)
      cout << a[i] << " ";
    cout << "\n";
  }
  return 0;
}