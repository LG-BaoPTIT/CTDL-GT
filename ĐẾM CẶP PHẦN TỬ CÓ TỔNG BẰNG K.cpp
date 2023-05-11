#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int Count(vector<int> a, int n, int k)
{
    unordered_map<int, int> tg;
    int ans = 0;
    for (int i = 0; i < n; i++)
        tg[a[i]]++;
    for (int i = 0; i < n; i++)
    {
        ans += tg[k - a[i]];
        ans -= (a[i] + a[i] == k ? 1 : 0);
    }
    return ans / 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &c : a)
            cin >> c;
        cout << Count(a, n, k) << "\n";
    }
    return 0;
}