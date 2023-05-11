#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
string Format(char s[])
{
    string res = "";
    for (int i = 0; i < strlen(s); i++)
        s[i] = (s[i] >= 'A' && s[i] <= 'Z' ? s[i] + 32 : s[i]);
    vector<string> a;
    char *p = strtok(s, " \t\n");
    while (p != NULL)
    {
        a.push_back(p);
        p = strtok(NULL, " \t\n");
    }
    res += a[a.size() - 1];
    for (int i = 0; i < a.size() - 1; i++)
        res += a[i][0];
    return res;
}
int main()
{
    int n;
    char s[60];
    cin >> n;
    getchar();
    vector<string> list;
    for (int i = 1; i <= n; i++)
    {
        fgets(s, sizeof(s), stdin);
        list.push_back(Format(s));
    }
    vector<pair<string, int>> v;
    unordered_map<string, int> t;
    for (int i = 0; i < list.size(); i++)
    {
        t[list[i]]++;
        v.push_back({list[i], t[list[i]]});
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second > 1)
            cout << v[i].first << v[i].second << "@ptit.edu.vn\n";
        else
            cout << v[i].first << "@ptit.edu.vn\n";
    }
    return 0;
}
