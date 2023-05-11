#include<bits/stdc++.h>
using namespace std;
long long ans(long long b,long long p)
{
  long long k=0;
  for (long long x=1; x<p; x++)
  {
    if (x*x%p==1)
    {
      long long m=x+p*(b/p);
      if (m>b) m-=p;
      k+=((m-x)/p+1);
    }
  }
  return k;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long b,p;
    cin >> b >> p;
    cout << ans(b,p) << "\n";
  }
  return 0;
}