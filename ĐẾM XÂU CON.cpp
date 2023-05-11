#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k, ans = 0;
        cin >> s >> k;
        int count[125];
        for (int i = 0; i < s.size(); i++)
        {
            int tg = 0;
            memset(count, 0, sizeof(count));
            for (int j = i; j < s.size(); j++)
            {
                tg += (count[(int)s[j]] == 0 ? 1 : 0);
                count[(int)s[j]]++;
                ans += (tg == k ? 1 : 0);
                if (tg > k)
                    break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
