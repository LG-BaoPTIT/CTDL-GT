#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
string a[25][25];
pair<int, int> dp[25][25];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 25; i++)
        {
            for (int j = 0; j < 25; j++)
                dp[i][j].first = dp[i][j].second = 0;
        }
        int n, res = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == "X")
                {
                    dp[i][j].first = dp[i][j - 1].first + 1;
                    dp[i][j].second = dp[i - 1][j].second + 1;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int val = min(dp[i][j].first, dp[i][j].second);
                for (int k = 0; k < val; k++)
                {
                    if (dp[i][j - k].second >= k + 1 && dp[i - k][j].first >= k + 1)
                        res = max(res, k + 1);
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}