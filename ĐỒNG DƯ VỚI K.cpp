#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a)
            cin >> c;
        vector<int> v;
        int diff = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
        for (int i = 1; i <= sqrt(diff); i++)
        {
            if (diff % i == 0)
            {
                if (i == diff / i)
                    v.push_back(i);
                else
                {
                    v.push_back(i);
                    v.push_back(diff / i);
                }
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            int mod = a[0] % v[i], ok = 1;
            for (int j = 1; j < a.size(); j++)
            {
                if (a[j] % v[i] != mod)
                {
                    ok = 0;
                    break;
                }
            }
            ans += (ok ? 1 : 0);
        }
        cout << ans << "\n";
    }
    return 0;
}