#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ok = 0, maxx, index;
        for (int i = s.size() - 2; i >= 0; i--)
        {
            if (s[i] > s[i + 1])
            {
                maxx = -1;
                ok = 1;
                for (int j = i + 1; j < s.size(); j++)
                {
                    if (s[j] - '0' > maxx && s[j] - '0' < s[i] - '0')
                    {
                        maxx = s[j] - '0';
                        index = j;
                    }
                }
                swap(s[i], s[index]);
                break;
            }
        }
        cout << (ok == 1 ? s : "-1") << "\n";
    }
    return 0;
}