#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        char s1[205];
        string s2;
        fgets(s1, sizeof(s1), stdin);
        getline(cin, s2);
        set<string> diff;
        char *p = strtok(s1, " \t\n");
        while (p != NULL)
        {
            diff.insert(p);
            p = strtok(NULL, " \t\n");
        }
        for (string x : diff)
        {
            int pos = s2.find(x);
            if (pos == -1)
                cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}