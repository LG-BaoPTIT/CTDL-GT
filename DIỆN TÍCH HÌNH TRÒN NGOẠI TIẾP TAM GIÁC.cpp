#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ll long long
const double PI = 2 * acos(0);
struct POINT
{
    double x, y;
};
typedef struct POINT Point;
bool isTriangle(double a, double b, double c)
{
    return (a + b > c && b + c > a && a + c > b ? 1 : 0);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Point A, B, C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        double a = hypotl(A.x - B.x, A.y - B.y), b = hypotl(B.x - C.x, B.y - C.y), c = hypotl(A.x - C.x, A.y - C.y);
        if (!isTriangle(a, b, c))
        {
            cout << "INVALID\n";
            continue;
        }
        double S = abs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y)) * 1.0 / 2;
        double R = (a * b * c) * 1.0 / (4 * S);
        double res = PI * R * R;
        cout << fixed << setprecision(3) << res << "\n";
    }
    return 0;
}