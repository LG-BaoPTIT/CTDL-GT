#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
bool isDominanceArray(vector<int> a)
{
    int odd = 0, even = 0;
    for (int i = 0; i < a.size(); i++)
    {
        odd += (a[i] & 1 ? 1 : 0);
        even += (a[i] % 2 == 0 ? 1 : 0);
    }
    if (a.size() & 1)
        return (odd > even);
    return even > odd;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int num;
        while (1)
        {
            cin >> num;
            a.push_back(num);
            if (cin.get() == '\n')
                break;
        }
        cout << (isDominanceArray(a) ? "YES\n" : "NO\n");
    }
    return 0;
}