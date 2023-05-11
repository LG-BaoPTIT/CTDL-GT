#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0, tmp = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &c : a)
            cin >> c;
        int start = 0, end = k - 1;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
            tmp += a[i];
        }
        for (int i = k; i < n; i++)
        {
            sum -= a[i - k];
            sum += a[i];
            if (sum > tmp)
            {
                tmp = sum;
                start = i - k + 1;
                end = i;
            }
        }
        for (int i = start; i <= end; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}