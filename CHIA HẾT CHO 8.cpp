#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
int String_To_Num(string s, int start, int end)
{
    int ans = 0;
    for (int i = start; i <= end; i++)
        ans = ans * 10 + (s[i] - '0');
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int dp[len][3];
        memset(dp, 0, sizeof(dp));
        for (int i = 2; i < len; i++)
        {
            for (int j = 0; j < 3; j++)
                dp[i][(j + (s[i] - '0')) % 3] = dp[i - 1][j];
            dp[i][String_To_Num(s, i - 2, i) % 3]++;
        }
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '8')
                ans++;
            if (i > 0)
                ans += (String_To_Num(s, i - 1, i) % 8 == 0 && String_To_Num(s, i - 1, i) % 3 != 0 ? 1 : 0);
            if (i > 1)
            {
                int tmp = String_To_Num(s, i - 2, i);
                if (tmp % 8 != 0)
                    continue;
                ans += (i - 1);
                ans -= dp[i][0];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}