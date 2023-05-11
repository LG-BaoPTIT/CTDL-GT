#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        set<int> uni, inter;
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            count[x]++;
            uni.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            uni.insert(x);
            if (count[x] > 0)
                inter.insert(x);
        }
        for (int v : uni)
            cout << v << " ";
        cout << "\n";
        for (int v : inter)
            cout << v << " ";
        cout << "\n";
    }
    return 0;
}