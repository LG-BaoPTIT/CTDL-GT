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
        ll n, m, len;
        string s;
        cin >> m >> n >> s;
        len = s.size();
        ll dp[len][n];
        memset(dp, 0, sizeof(dp));
        dp[0][(s[0] - '0') % n]++;
        for (ll i = 1; i < len; i++)
        {
            dp[i][(s[i] - '0') % n]++;
            for (ll j = 0; j < n; j++)
            {
                dp[i][j] += dp[i - 1][j];
                dp[i][(j * 10 + (s[i] - '0')) % n] += dp[i - 1][j];
            }
        }
        cout << dp[len - 1][0] << "\n";
    }
    return 0;
}