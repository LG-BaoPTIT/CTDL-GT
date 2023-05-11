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
    int n, k, x;
    cin >> n >> k;
    vector < int > a;
    for (int i = 1; i <= n * k; i++) 
    {
      cin >> x;
      a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (auto c: a)
      cout << c << " ";
    cout << "\n";
  }
  return 0;
}