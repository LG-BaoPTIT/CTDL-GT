#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, L;
        cin >> n >> m >> L;
        int a[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        int prefix_sum_row[n + 1][m + 1];
        memset(prefix_sum_row, 0, sizeof(prefix_sum_row));
        for (int j = 1; j <= m; j++)
        {
            for (int i = 1; i <= n; i++)
                prefix_sum_row[i][j] = prefix_sum_row[i - 1][j] + a[i][j];
        }
        int dp[n - L + 2][m + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n - L + 1; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] = dp[i][j - 1] + prefix_sum_row[i + L - 1][j] - prefix_sum_row[i - 1][j];
            }
        }
        for (int i = 1; i <= n - L + 1; i++)
        {
            for (int j = L; j <= m; j++)
            {
                cout << (dp[i][j] - dp[i][j - L]) / (L * L) << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}