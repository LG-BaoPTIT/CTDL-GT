#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    unordered_map<string, int> count;
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        set<string> diff;
        for (int j = 1; j <= a[i].size(); j++)
        {
            for (int k = 0; k <= a[i].size() - j; k++)
                diff.insert(a[i].substr(k, j));
        }
        set<string>::iterator itr;
        for (itr = diff.begin(); itr != diff.end(); itr++)
            res += count[*itr];
    }
    cout << res - n;
    return 0;
}