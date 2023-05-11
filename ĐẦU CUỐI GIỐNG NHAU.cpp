#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main() 
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int ans=s.size();
    for (int i=0; i<s.size()-1; i++)
    {
      for (int j=i+1; j<s.size(); j++)
        ans+=(s[i]==s[j]?1:0);
    }
    cout << ans << "\n";
  }
  return 0;
}