#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 3 * 1e5;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> count(MAX);
        int n, x, ok = 0;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &c : a)
        {
            cin >> c;
            count[c]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (count[x + a[i]] > 0)
            {
                ok = 1;
                break;
            }
        }
        cout << (ok == 1 ? 1 : -1) << "\n";
    }
    return 0;
}