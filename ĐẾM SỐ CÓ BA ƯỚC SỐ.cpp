#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+5;
int main()
{
  long long Prime[MAX];
  memset(Prime,1,sizeof(Prime));
  for (int i=2; i<=MAX/2; i++)
  {
    if (Prime[i])
    {
      for (int j=2*i; j<MAX; j+=i)
        Prime[j]=0;
    }
  }
  int t;
  cin >> t;
  while (t--)
  {
    long long n, ans=0;
    cin >> n;
    for (int i=2; i<=sqrt(n); i++)
    {
      if (Prime[i])
        ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}