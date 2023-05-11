#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main() 
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int odd=0, even=0;
    for (int i=0; i<s.size(); i++)
    {
      if (i&1)
        odd+=s[i]-'0';
      else
        even+=s[i]-'0';
    }
    cout << (abs(odd-even)%11==0) << "\n";
  }
  return 0;
}