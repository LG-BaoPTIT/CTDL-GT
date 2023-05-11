#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    char c;
    cin >> c;
    c = (c >= 'a' && c <= 'z' ? c-32 : c+32);
    cout << c << "\n";
  }
  return 0;
}
