#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
int main()
{
    vector<string> code101 = {"A", "B", "B", "A", "D", "C", "C", "A", "B", "D", "C", "C", "A", "B", "D"};
    vector<string> code102 = {"A", "C", "C", "A", "B", "C", "D", "D", "B", "B", "C", "D", "D", "B", "B"};
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> a(15);
        int code, right_ans = 0;
        cin >> code;
        for (int i = 0; i < 15; i++)
            cin >> a[i];
        double mark;
        if (code == 101)
        {
            for (int i = 0; i < 15; i++)
                right_ans += (a[i] == code101[i] ? 1 : 0);
        }
        else
        {
            for (int i = 0; i < 15; i++)
                right_ans += (a[i] == code102[i] ? 1 : 0);
        }
        mark = (2 * right_ans) * 1.0 / 3;
        cout << fixed << setprecision(2) << mark << "\n";
    }
    return 0;
}