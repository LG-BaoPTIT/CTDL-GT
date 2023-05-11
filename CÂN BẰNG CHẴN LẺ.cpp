#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
bool Balance(string s)
{
    int odd = 0, even = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] - '0') % 2)
            odd++;
        else
            even++;
    }
    return (odd == even);
}
int main()
{
    int n, start, end, count = 0;
    cin >> n;
    start = pow(10, n - 1), end = pow(10, n);
    for (int i = start; i < end; i++)
    {
        if (Balance(to_string(i)))
        {
            cout << i << " ";
            count++;
        }
        if (count == 10)
        {
            count = 0;
            cout << "\n";
        }
    }
    return 0;
}