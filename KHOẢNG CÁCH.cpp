#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    double x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double ans=hypotl(x1-x2,y1-y2);
    cout << fixed << setprecision(4) << ans << "\n";
  }
  return 0;
}