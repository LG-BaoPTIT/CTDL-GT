#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int a[25], n, k;
void Print()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            Print();
        else
            Try(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        a[0] = 0;
        Try(1);
        cout << "\n";
    }
    return 0;
}