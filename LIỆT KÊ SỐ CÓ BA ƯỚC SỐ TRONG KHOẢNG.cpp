#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
const int MAX = 1e6 + 5;
int main()
{
  bool isPrime[MAX];
  memset(isPrime,1,sizeof(isPrime));
  isPrime[0]=isPrime[1]=0;
  for (int i=2; i<=MAX/2; i++)
  {
    if (isPrime[i])
    {
      for (int j=2*i; j<MAX; j+=i)
        isPrime[j]=0;
    }
  }
  int t;
  cin >> t;
  while (t--)
  {
    long long l,r, ans=0;
    cin >> l >> r;
    for (int i=sqrt(l); i<=sqrt(r); i++)
      ans+=(isPrime[i]?1:0);
    cout << ans << "\n";
  }
  return 0;
}