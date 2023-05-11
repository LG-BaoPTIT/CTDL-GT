#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
const int MAX = 1e5 + 5;
int main()
{
    bool Prime[MAX];
    memset(Prime, true, sizeof(Prime));
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
        int x, count = 0;
        cin >> x;
        for (int i = 1; i <= x; i++)
            count += (__gcd(i, x) == 1 ? 1 : 0);
        cout << Prime[count] << "\n";
    }
    return 0;
}