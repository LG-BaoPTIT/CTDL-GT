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
        string s;
        cin >> s;
        int count[300];
        memset(count, 0, sizeof(count));
        for (int i = 0; i < s.size(); i++)
            count[s[i]]++;
        for (int i = 0; i < s.size(); i++)
        {
            if (count[s[i]] == 1)
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}