#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int a[205][205], dp[205][205][205];
int Longest_Sum_Subsequence(int n, int i, int j)
{
    int ans = INT_MIN, sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum = max(dp[k][i][j], sum + dp[k][i][j]);
        ans = max(ans, sum);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, res = INT_MIN;
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                dp[i][j][j] = a[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                for (int k = j + 1; k <= m; k++)
                    dp[i][j][k] = dp[i][j][k - 1] + a[i][k];
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = i; j <= m; j++)
                res = max(res, Longest_Sum_Subsequence(n, i, j));
        }
        cout << res << "\n";
    }
    return 0;
}