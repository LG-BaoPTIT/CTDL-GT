#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a)
            cin >> c;
        sort(a.begin(), a.end());
        int ans = INT_MAX;
        for (int i = 1; i < n; i++)
            ans = min(ans, abs(a[i] - a[i - 1]));
        cout << ans << "\n";
    }
    return 0;
}