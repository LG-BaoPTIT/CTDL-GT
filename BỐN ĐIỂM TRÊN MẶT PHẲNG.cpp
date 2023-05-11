#include <bits/stdc++.h>
using namespace std;
struct POINT
{
    int x, y, z;
};
typedef struct POINT Point;
int Scalar(Point A, Point B)
{
    return A.x * B.x + A.y * B.y + A.z * B.z;
}
Point Direct(Point A, Point B)
{
    Point res;
    res.x = A.y * B.z - B.y * A.z;
    res.y = A.z * B.x - A.x * B.z;
    res.z = A.x * B.y - A.y * B.x;
    return res;
}
Point Vector(Point A, Point B)
{
    Point v;
    v.x = B.x - A.x;
    v.y = B.y - A.y;
    v.z = B.z - A.z;
    return v;
}
bool isCoplanar(Point A, Point B, Point C, Point D)
{
    Point AB = Vector(A, B), AC = Vector(A, C), AD = Vector(A, D);
    Point mid = Direct(AB, AC);
    return Scalar(mid, AD) == 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Point a[4];
        for (int i = 0; i < 4; i++)
            cin >> a[i].x >> a[i].y >> a[i].z;
        cout << (isCoplanar(a[0], a[1], a[2], a[3]) ? "YES\n" : "NO\n");
    }
    return 0;
}