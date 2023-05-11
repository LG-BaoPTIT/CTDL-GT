#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
const int MAX = 1e5 + 10;
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
        int l, r, res = 0;
        cin >> l >> r;
        for (int i = l; i <= r; i++)
            res += (Prime[i] ? 1 : 0);
        cout << res << "\n";
    }
    return 0;
}