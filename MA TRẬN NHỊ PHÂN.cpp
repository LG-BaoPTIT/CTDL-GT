#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    int n, num, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int one = 0, zero = 0;
        for (int i = 1; i <= 3; i++)
        {
            cin >> num;
            one += (num == 1 ? 1 : 0);
            zero += (num == 0 ? 1 : 0);
        }
        res += (one > zero);
    }
    cout << res;
    return 0;
}