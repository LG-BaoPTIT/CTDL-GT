#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, ans = 0;
        cin >> n >> k;
        vector<ll> a(n);
        for (auto &c : a)
            cin >> c;
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            ll pos = lower_bound(a.begin(), a.end(), a[i] + k) - a.begin();
            ans += (pos - 1 - i);
        }
        cout << ans << "\n";
    }
    return 0;
}