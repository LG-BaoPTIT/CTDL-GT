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
    vector < int > a(n);
    for (auto & c: a) 
        cin >> c;
    cout << * max_element(a.begin(), a.end()) << "\n";
  }
  return 0;
}