#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
  char s[105], *p;
  vector<string> a;
  string remove;
  fgets(s,sizeof(s),stdin);
  cin >> remove;
  p=strtok(s," \t\n");
  while (p!=NULL)
  {
    a.push_back(p);
    p=strtok(NULL," \t\n");
  }
  for (int i=0; i<a.size(); i++)
  {
    if(a[i]!=remove)
      cout << a[i] << " ";
  }
  return 0;
}