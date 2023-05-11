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
        int count = 1;
        vector<pair<char, int>> a;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
                count++;
            else
            {
                a.push_back({s[i], count});
                count = 1;
            }
        }
        a.push_back({s[s.size() - 1], count});
        for (int i = 0; i < a.size(); i++)
            cout << a[i].first << a[i].second;
        cout << "\n";
    }
    return 0;
}