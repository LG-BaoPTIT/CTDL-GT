#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int a[105][105], n, m;
void Trace(int i, int j)
{
    if (i < 1 || j < 1 || i > n || j > m)
        return;
    if (a[i][j])
    {
        a[i][j] = 0;
        Trace(i - 1, j);
        Trace(i - 1, j + 1);
        Trace(i, j + 1);
        Trace(i + 1, j + 1);
        Trace(i + 1, j);
        Trace(i + 1, j - 1);
        Trace(i, j - 1);
        Trace(i - 1, j - 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int res = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                if (a[i][j])
                {
                    res++;
                    Trace(i, j);
                }
        }
        cout << res << "\n";
    }
    return 0;
}