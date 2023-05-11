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
        int n, sum = 0, pos = -1;
        cin >> n;
        vector<int> a(n), prefix_sum(n, 0);
        for (auto &c : a)
        {
            cin >> c;
            sum += c;
        }
        prefix_sum[0] = a[0];
        for (int i = 1; i < n; i++)
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
        for (int i = 1; i < n - 1; i++)
        {
            if (prefix_sum[i] - a[i] == sum - prefix_sum[i])
            {
                pos = i + 1;
                break;
            }
        }
        cout << pos << "\n";
    }
    return 0;
}