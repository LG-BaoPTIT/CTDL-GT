#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
const int MAX = 1e5 + 5;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        int a[n][n];
        bool exist[n][MAX];
        memset(exist, 0, sizeof(exist));
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (!i)
                    s.insert(a[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                exist[i][a[i][j]] = 1;
        }
        set<int>::iterator itr;
        for (itr = s.begin(); itr != s.end(); itr++)
        {
            int ok = 1;
            for (int i = 0; i < n; i++)
            {
                if (!exist[i][*itr])
                {
                    ok = 0;
                    break;
                }
            }
            res += (ok ? 1 : 0);
        }
        cout << res << "\n";
    }
    return 0;
}