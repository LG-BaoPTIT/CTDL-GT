#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b, ans = 0;
        cin >> m >> n >> a >> b;
        for (int i = m; i <= n; i++)
            ans += (i % a == 0 || i % b == 0 ? 1 : 0);
        cout << ans << "\n";
    }
    return 0;
}