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
        int n;
        cin >> n;
        int a[n], dp[n];
        for (int i = 0; i < n; i++)
            dp[i] = 1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j] && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
            }
        }
        cout << *max_element(dp, dp + n) << "\n";
    }
    return 0;
}