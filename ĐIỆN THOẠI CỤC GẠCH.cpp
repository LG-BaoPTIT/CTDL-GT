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
        string s, res, tg;
        cin >> s;
        vector<string> a(10);
        a[2] = "ABC", a[3] = "DEF", a[4] = "GHI", a[5] = "JKL", a[6] = "MNO", a[7] = "PQRS", a[8] = "TUV", a[9] = "WXYZ";
        for (int i = 0; i < s.size(); i++)
            s[i] = (s[i] >= 'a' && s[i] <= 'z' ? s[i] - 32 : s[i]);
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 2; j < 10; j++)
            {
                int pos = a[j].find(s[i]);
                if (pos != -1)
                {
                    res += to_string(j);
                    break;
                }
            }
        }
        tg = res;
        reverse(res.begin(), res.end());
        cout << (res == tg ? "YES\n" : "NO\n");
    }
    return 0;
}