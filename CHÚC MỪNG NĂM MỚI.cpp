#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string x;
    set<string> s;
    for (int i = 1; i <= n; i++)
    {
        getline(cin, x);
        s.insert(x);
    }
    cout << s.size();
    return 0;
}