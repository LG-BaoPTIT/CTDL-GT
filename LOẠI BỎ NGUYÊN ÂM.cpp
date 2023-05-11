#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    string s, res;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'U' && s[i] != 'E' && s[i] != 'O' && s[i] != 'A' && s[i] != 'I' && s[i] != 'Y' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y')
            res += s[i];
    }
    for (int i = 0; i < res.size(); i++)
        cout << "." << (char)tolower(res[i]);
    return 0;
}