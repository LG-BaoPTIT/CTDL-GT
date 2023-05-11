#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, exception_count[5], ans = 0;
        memset(exception_count, 0, sizeof(exception_count));
        cin >> n >> m;
        vector<long long> x(n), y(m);
        for (auto &c : x)
            cin >> c;
        for (auto &c : y)
        {
            cin >> c;
            if (c < 5)
                exception_count[c]++;
        }
        sort(y.begin(), y.end());
        vector<long long>::iterator it;
        for (long long i = 0; i < n; i++)
        {
            if (x[i] == 0)
                continue;
            else if (x[i] == 1)
                ans += exception_count[0];
            else
            {
                it = upper_bound(y.begin(), y.end(), x[i]);
                ans += (m - (it - y.begin()));
                ans += (exception_count[0] + exception_count[1]);
            }
            if (x[i] == 2)
                ans -= (exception_count[3] + exception_count[4]);
            if (x[i] == 3)
                ans += exception_count[2];
        }
        cout << ans << "\n";
    }
    return 0;
}
/* Nếu y > x thì x^y > y^x
Các TH đặc biệt:
- x = 0 => Không có cặp nào thỏa mãn
- x = 1 => Số cặp thỏa mãn bằng số các số 0 trong mảng y vì 1^y > y^1 <=> y = 0
- x = 2 => Trừ đi số lượng các số 3 và 4 trong mảng y vì 2^3 < 3^2 và 2^4 = 4^2
- x = 3 => Cộng thêm số lượng các số 2 trong mảng y vì 3^2 > 2^3
- Ngoài ra đếm thêm các số 0 và 1 trong mảng y để cộng vào kết quả vì
x^0 > 0^x với mọi x, và x^1 > 1^x với mọi x != 1
*/
