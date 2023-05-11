#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ans;
        cin >> s;
        stack<int> tmp;
        for (int i = 0; i <= s.size(); i++)
        {
            tmp.push(i + 1);
            if (s[i] == 'I' || i == s.size())
            {
                while (!tmp.empty())
                {
                    ans += to_string(tmp.top());
                    tmp.pop();
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}