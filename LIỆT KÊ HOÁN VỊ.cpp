#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    for (int i=1; i<=n; i++)
      s.push_back(i+'0');
    cout << s << " ";
    while (next_permutation(s.begin(),s.end()))
      cout << s << " ";
    cout << "\n";
  }
  return 0;
}