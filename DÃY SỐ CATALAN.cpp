#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
const ui64 MAX = 1e4 + 5;
const ui64 lim = 1e18;
string Multiply(string s1, string s2)
{
    string ans = "";
    if (s1 == "0" || s2 == "0")
        return "0";
    if (s1.size() < s2.size())
        swap(s1, s2);
    int len = s1.size() + s2.size();
    vector<int> res(len, 0);
    int shift = len - 1;
    for (int i = s2.size() - 1; i >= 0; i--)
    {
        int num2 = s2[i] - '0', index = shift, remain = 0;
        for (int j = s1.size() - 1; j >= 0; j--)
        {
            int num1 = s1[j] - '0';
            int tmp = res[index] + num2 * num1 + remain;
            res[index] = tmp % 10;
            remain = tmp / 10;
            index--;
        }
        res[index] = remain;
        shift--;
    }
    while (res[0] == 0)
        res.erase(res.begin());
    for (int i = 0; i < res.size(); i++)
        ans += to_string(res[i]);
    return ans;
}
int main()
{
    ui64 up[MAX], down[MAX];
    memset(up, 0, sizeof(up));
    memset(down, 0, sizeof(down));
    bool Prime[MAX];
    memset(Prime, 1, sizeof(Prime));
    Prime[0] = Prime[1] = 0;
    for (ui64 i = 2; i <= MAX / 2; i++)
    {
        if (Prime[i])
        {
            for (ui64 j = 2 * i; j < MAX; j += i)
                Prime[j] = 0;
        }
    }
    ui64 n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    n++;
    for (ui64 i = n + 2; i <= 2 * n; i++)
    {
        ui64 k = i;
        if (Prime[k])
            up[k]++;
        else
        {
            while (k % 2 == 0)
            {
                k /= 2;
                up[2]++;
            }
            for (ui64 j = 3; j <= sqrt(k); j += 2)
            {
                while (k % j == 0)
                {
                    k /= j;
                    up[j]++;
                }
            }
            if (k > 2)
                up[k]++;
        }
    }
    for (ui64 i = 2; i <= n; i++)
    {
        ui64 k = i;
        if (Prime[k])
            down[k]++;
        else
        {
            while (k % 2 == 0)
            {
                k /= 2;
                down[2]++;
            }
            for (ui64 j = 3; j <= sqrt(k); j += 2)
            {
                while (k % j == 0)
                {
                    k /= j;
                    down[j]++;
                }
            }
            if (k > 2)
                down[k]++;
        }
    }
    for (ui64 i = 2; i < 1e4; i++)
        up[i] -= down[i];
    vector<ui64> v;
    for (ui64 i = 2; i < 1e4; i++)
    {
        if (up[i] > 0)
            v.insert(v.end(), up[i], i);
    }
    string ans = "1";
    for (ui64 i = 0; i < v.size(); i++)
        ans = Multiply(ans, to_string(v[i]));
    cout << ans;
    return 0;
}