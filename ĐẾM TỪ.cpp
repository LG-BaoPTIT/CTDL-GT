#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    char s[1005], *p;
    int ans=0;
    fgets(s,sizeof(s),stdin);
    p=strtok(s," \t\n");
    while (p!=NULL)
    {
      ans++;
      p=strtok(NULL," \t\n");
    }
    cout << ans << "\n";
  }
  return 0;
}