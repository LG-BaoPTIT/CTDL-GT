#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    ui64 fib[92];
    fib[0] = 0, fib[1] = 1;
    for (ui64 i = 2; i < 92; i++)
        fib[i] = fib[i - 2] + fib[i - 1];
    int t;
    cin >> t;
    while (t--)
    {
        ui64 n, ok = 0;
        cin >> n;
        for (ui64 i = 0; i < 92; i++)
        {
            if (n == fib[i])
            {
                ok = 1;
                break;
            }
            if (fib[i] > n)
                break;
        }
        cout << (ok == 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}