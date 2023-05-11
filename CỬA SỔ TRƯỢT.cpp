#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    int n, m;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] * b[i % m][j % m] << " ";
        cout << "\n";
    }
    return 0;
}