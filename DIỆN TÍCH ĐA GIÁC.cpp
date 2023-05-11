#include <bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
struct POINT
{
    int x;
    int y;
};
typedef struct POINT Point;
int Area(Point A, Point B, Point C)
{
    return abs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tg = 0;
        cin >> n;
        Point a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i].x >> a[i].y;
        for (int i = 2; i < n; i++)
            tg += Area(a[0], a[i], a[i - 1]);
        double res = (tg * 1.0) / 2;
        cout << fixed << setprecision(3) << res << "\n";
    }
    return 0;
}