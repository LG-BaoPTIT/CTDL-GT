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
        vector<int> a(n), r(n);
        for (auto &c : a)
            cin >> c;
        int min_element = a[0], max_diff = a[1] - a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] - min_element > max_diff)
                max_diff = a[i] - min_element;
            if (a[i] < min_element)
                min_element = a[i];
        }
        cout << (max_diff < 1 ? -1 : max_diff) << "\n";
    }
    return 0;
}