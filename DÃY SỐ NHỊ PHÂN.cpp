#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int Solve(vector<int> a, vector<int> b, int n)
{
    vector<int> v(n);
    for (int i = 0; i < a.size(); i++)
        v[i] = a[i] - b[i];
    map<int, int> m;
    int res = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == 0)
            res = i + 1;
        if (m.find(sum) != m.end())
            res = max(res, i - m[sum]);
        else
            m[sum] = i;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &c : a)
            cin >> c;
        for (auto &c : b)
            cin >> c;
        cout << Solve(a, b, n) << "\n";
    }
    return 0;
}