#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void Format(string & s) 
{
  s[0] = (s[0] >= 'a' && s[0] < 'z' ? s[0] - 32 : s[0]);
  for (int i = 1; i < s.size(); i++) 
  {
    s[i] = (s[i] >= 'A' && s[i] <= 'Z' ? s[i] + 32 : s[i]);
  }
}
int main() {
  char s[105], * p;
  vector < string > a;
  fgets(s, sizeof(s), stdin);
  p = strtok(s, " \t\n");
  while (p != NULL) 
  {
    a.push_back(p);
    p = strtok(NULL, " \t\n");
  }
  for (int i = 0; i < a.size(); i++)
    Format(a[i]);
  for (int i = 0; i < a[a.size() - 1].size(); i++)
    a[a.size() - 1][i] = (a[a.size() - 1][i] >= 'a' && a[a.size() - 1][i] <= 'z' ? a[a.size() - 1][i] - 32 : a[a.size() - 1][i]);
  for (int i = 0; i < a.size() - 2; i++)
    cout << a[i] << " ";
  cout << a[a.size() - 2] << ", " << a[a.size() - 1];
  return 0;
}