#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    vector<int> fib(18);
    unordered_map<int, int> check;
    fib[0] = 0, fib[1] = 1;
    check[0] = check[1] = 1;
    for (int i = 2; i < 18; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
        check[fib[i]] = 1;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a)
            cin >> c;
        for (int i = 0; i < n; i++)
        {
            if (check[a[i]])
                cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}