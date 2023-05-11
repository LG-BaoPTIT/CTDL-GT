#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 5;
int main()
{
    int Prime[MAX];
    memset(Prime, 1, sizeof(Prime));
    Prime[0] = Prime[1] = 0;
    for (int i = 2; i <= MAX / 2; i++)
    {
        if (Prime[i])
        {
            for (int j = 2 * i; j < MAX; j += i)
                Prime[j] = 0;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, ok = 0;
        cin >> n;
        for (int i = 2; i <= n / 2; i++)
        {
            if (Prime[i] && Prime[n - i])
            {
                cout << i << " " << n - i;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << -1;
        cout << "\n";
    }
    return 0;
}