#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int isDivisibleByFive(string s)
{
    int mod = 0, tmp;
    for (int i = 0; i < s.size(); i++)
    {
        tmp = 2 * mod + (s[i] - '0');
        tmp -= (tmp >= 5 ? 5 : 0);
        mod = tmp % 5;
    }
    return (tmp == 0);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << (isDivisibleByFive(s) ? "Yes" : "No") << "\n";
    }
    return 0;
}