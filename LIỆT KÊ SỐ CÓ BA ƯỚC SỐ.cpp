#include <bits/stdc++.h>
using namespace std;
const int MAX=1e4+5;
int main()
{
  int Prime[MAX];
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
    int n;
    cin >> n;
    for (int i=2; i<=sqrt(n); i++)
    {
      if (Prime[i])
        cout << i*i << " ";
    }
    cout << "\n";
  }
  return 0;
}