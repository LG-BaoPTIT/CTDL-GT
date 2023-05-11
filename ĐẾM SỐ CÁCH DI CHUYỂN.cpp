#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int a[25][25];
int Trace(int a[25][25], int i, int j, int k)
{
    if (i < 1 || j < 1)
        return 0;
    if (i == 1 && j == 1)
        return k == a[i][j];
    return Trace(a, i - 1, j, k - a[i][j]) + Trace(a, i, j - 1, k - a[i][j]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        cout << Trace(a, n, n, k) << "\n";
    }
    return 0;
}