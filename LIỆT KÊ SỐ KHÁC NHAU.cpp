#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n;
  cin >> n;
  vector < int > a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  set < int > diff;
  for (int i = 0; i < n; i++)
    diff.insert(a[i]);
  for (auto c: diff)
    cout << c << " ";
  return 0;
}