#include <bits/stdc++.h>
using namespace std;
long long minn(long long a, long long b)
{
    return (a > b ? b : a);
}
int Smallest_Subsequence(vector<long long> a, long long n, long long x)
{
    vector<long long> tmp;
    long long sum = 0, ans = 1e9;
    for (long long i = 0; i < n; i++)
    {
        tmp.push_back(a[i]);
        sum += a[i];
        if (sum > x)
        {
            while (1)
            {
                if (sum - tmp[0] <= x)
                    break;
                else
                {
                    sum -= tmp[0];
                    tmp.erase(tmp.begin());
                }
            }
            ans = minn(ans, tmp.size());
        }
    }
    return ans;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x, sum = 0;
        cin >> n >> x;
        vector<long long> a(n);
        for (auto &c : a)
        {
            cin >> c;
            sum += c;
        }
        cout << (sum <= x ? -1 : Smallest_Subsequence(a, n, x)) << "\n";
    }
    return 0;
}
