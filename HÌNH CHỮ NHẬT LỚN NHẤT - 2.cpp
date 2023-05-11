#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int a[505][505];
int Max_Area(int count[505], int m)
{
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        int l = i, r = i;
        while (count[l] >= count[i] && l > 0)
            l--;
        while (count[r] >= count[i] && r <= m)
            r++;
        ans = max(ans, count[i] * (r - l - 1));
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        int count[505][505];
        memset(count, 0, sizeof(count));
        cout << "\n";
        for (int j = 1; j <= m; j++)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i][j])
                    count[i][j] = count[i - 1][j] + 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int v[505];
            for (int j = 1; j <= m; j++)
                v[j] = count[i][j];
            ans = max(ans, Max_Area(v, m));
        }
        cout << ans << "\n";
    }
    return 0;
}