#include <bits/stdc++.h>
using namespace std;
int miniSwap(vector<int> a, int n)
{
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        v[i] = {a[i], i};
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second == i)
            continue;
        else
        {
            ans++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << miniSwap(a, n) << "\n";
    }
    return 0;
}
