#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int a[10005];
    memset(a, 1, sizeof(a));
    a[0] = 0, a[1] = 0;
    for (int i = 2; i <= 5002; i++)
    {
        if (a[i])
        {
            for (int j = 2 * i; j <= 10004; j += i)
                a[j] = 0;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            if (a[i])
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
