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
    vector<int> a(n);
    for (int i=0; i<n; i++)
      cin >> a[i];
    prev_permutation(a.begin(),a.end());
    for (int i=0; i<n; i++)
      cout << a[i] << " ";
    cout << "\n";
  }
  return 0;
}