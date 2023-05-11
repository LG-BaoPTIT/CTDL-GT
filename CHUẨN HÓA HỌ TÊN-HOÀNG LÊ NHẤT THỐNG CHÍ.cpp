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
        char s[65];
        int way;
        cin >> way;
        getchar();
        fgets(s, sizeof(s), stdin);
        if (way == 1)
        {
            for (int i = 0; i < strlen(s); i++)
                s[i] = (s[i] >= 'A' && s[i] <= 'Z' ? s[i] + 32 : s[i]);
            vector<string> a;
            char *p = strtok(s, " \t\n");
            while (p != NULL)
            {
                a.push_back(p);
                p = strtok(NULL, " \t\n");
            }
            for (int i = 0; i < a.size(); i++)
                a[i][0] -= 32;
            cout << a[a.size() - 1] << " ";
            for (int i = 0; i < a.size() - 1; i++)
                cout << a[i] << " ";
        }
        else
        {
            for (int i = 0; i < strlen(s); i++)
                s[i] = (s[i] >= 'A' && s[i] <= 'Z' ? s[i] + 32 : s[i]);
            vector<string> a;
            char *p = strtok(s, " \t\n");
            while (p != NULL)
            {
                a.push_back(p);
                p = strtok(NULL, " \t\n");
            }
            for (int i = 0; i < a.size(); i++)
                a[i][0] -= 32;
            for (int i = 1; i < a.size(); i++)
                cout << a[i] << " ";
            cout << a[0];
        }
        cout << "\n";
    }
    return 0;
}