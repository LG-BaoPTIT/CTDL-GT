#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
bool isPrime (int n)
{
  if (n<2)
    return 0;
  for (int i=2; i<=sqrt(n); i++)
  {
    if (n%i==0)
      return 0;
  }
  return 1;
}
int main() 
{
  int n;
  cin >> n;
  cout << (isPrime(n)?"YES":"NO");
  return 0;
}