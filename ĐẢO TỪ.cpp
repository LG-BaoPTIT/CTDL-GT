#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define ui64 unsigned long long
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        char s[1005];
        fgets(s, sizeof(s), stdin);
        vector<string> a;
        char *p;
        p = strtok(s, " \t\n");
        while (p != NULL)
        {
            a.push_back(p);
            p = strtok(NULL, " \t\n");
        }
        for (int i = a.size() - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}