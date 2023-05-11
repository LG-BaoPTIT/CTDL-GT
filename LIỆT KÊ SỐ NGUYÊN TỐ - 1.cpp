#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+5;
int main()
{
  int Prime[MAX];
  memset(Prime,1,sizeof(Prime));
  Prime[0]=Prime[1]=0;
  for (int i=2; i<=MAX/2; i++)
  {
    if (Prime[i])
    {
      for (int j=2*i; j<MAX; j+=i)
        Prime[j]=0;
    }
  }
  int a,b;
  cin >> a >> b;
  if (a>b) swap(a,b);
  for (int i=a; i<=b; i++)
  {
    if (Prime[i])
      cout << i << " ";
  }
  return 0;
}