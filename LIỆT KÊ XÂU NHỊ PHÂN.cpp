#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
int binary[25], n;
void Print(int binary[25], int n)
{
    for (int i = 0; i < n; i++)
        cout << binary[i];
    cout << " ";
}
void Generate(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        binary[k] = i;
        if (k == n - 1)
            Print(binary, n);
        else
            Generate(k + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(binary, 0, sizeof(binary));
        Generate(0);
        cout << "\n";
    }
    return 0;
}