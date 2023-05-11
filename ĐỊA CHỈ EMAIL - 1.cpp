#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    char s[105];
    fgets(s, sizeof(s), stdin);
    vector<string> v;
    char *p;
    p = strtok(s, " \t\n");
    while (p != NULL)
    {
        v.push_back(p);
        p = strtok(NULL, " \t\n");
    }
    string ans;
    for (int i = 0; i < v[v.size() - 1].size(); i++)
        ans += tolower(v[v.size() - 1][i]);
    for (int i = 0; i < v.size() - 1; i++)
        ans += tolower(v[i][0]);
    cout << ans << "@ptit.edu.vn";
    return 0;
}