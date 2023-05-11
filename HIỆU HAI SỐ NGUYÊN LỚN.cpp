#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
string Subtract(string x, string y)
{
    string ans;
    if (x.size() < y.size())
        swap(x, y);
    y.insert(0, x.size() - y.size(), '0');
    if (x < y)
        swap(x, y);
    vector<int> a(x.size()), b(y.size()), sub(x.size());
    for (int i = 0; i < x.size(); i++)
        a[i] = x[i] - '0';
    for (int i = 0; i < y.size(); i++)
        b[i] = y[i] - '0';
    int remain = 0;
    for (int i = x.size() - 1; i >= 0; i--)
    {
        int tmp = a[i] - b[i] - remain;
        remain = (tmp < 0 ? 1 : 0);
        sub[i] = (tmp + 10) % 10;
    }
    for (int i = 0; i < sub.size(); i++)
        ans += to_string(sub[i]);
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        cout << Subtract(x, y) << "\n";
    }
    return 0;
}