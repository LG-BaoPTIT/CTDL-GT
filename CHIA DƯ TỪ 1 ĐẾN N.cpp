#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << (k * (k - 1) / 2) * (n / k) + ((n % k) * (n % k + 1) / 2) << "\n";
    }
    return 0;
}