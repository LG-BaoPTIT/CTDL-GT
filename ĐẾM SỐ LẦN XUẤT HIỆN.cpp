#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        unordered_map<int, int> count;
        vector<int> a(n);
        for (auto &c : a)
        {
            cin >> c;
            count[c]++;
        }
        cout << (count[x] == 0 ? -1 : count[x]) << "\n";
    }
    return 0;
}