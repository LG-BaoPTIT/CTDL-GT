#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
ui64 BCNN(ui64 a, ui64 b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ui64 x, y, z, minlcm, n;
        cin >> x >> y >> z >> n;
        minlcm = BCNN(BCNN(x, y), z);
        if (minlcm > pow(10, n) - 1)
            cout << -1 << "\n";
        else
        {
            ui64 res = pow(10, n - 1);
            cout << (res % minlcm == 0 ? res : ((res / minlcm) + 1) * minlcm) << "\n";
        }
    }
    return 0;
}