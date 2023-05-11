#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, res = 0;
        cin >> n >> m;
        vector<vector<int>> dp;
        dp.resize(n, vector<int>(m));
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i][j] && i == 0)
                    dp[i][j] = 1;
                else if (a[i][j])
                    dp[i][j] = dp[i - 1][j] + 1;
            }
        }
        for (int i = 0; i < n; i++)
            sort(dp[i].rbegin(), dp[i].rend());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                res = max(res, dp[i][j] * (j + 1));
        }
        cout << res << "\n";
    }
    return 0;
}