#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a)
            cin >> c;
        vector<int> left(n, 0), right(n, 0);
        for (int i = 1; i < n; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[i] > a[j])
                    left[i] = max(left[i], left[j] + 1);
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                    right[i] = max(right[i], right[j] + 1);
            }
        }
        for (int i = 0; i < n; i++)
            res = max(res, left[i] + right[i] + 1);
        cout << res << "\n";
    }
    return 0;
}