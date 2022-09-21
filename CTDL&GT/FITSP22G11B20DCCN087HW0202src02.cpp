#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "nhap p0 trong khoang tu 0-1: ";
    double p0, p = 0,max=0,min=999;
    cin >> p0;
    while (p <= 1-p0)
    {
        double Hx;
        if (p == 0)
        {
            Hx = -(p0 * log2(p0) + (1 - p0) * log(1 - p0));
        }
        else
            Hx = -(p0 * log2(p0) + p * log2(p) + (1 - p0 - p) * log2(1 - p0 - p));
        if (max < Hx)
            max = Hx;
        if (min > Hx)
            min = Hx;
        cout << "p=" << p << "  H(X)= " <<Hx<< endl;
        p += 0.01;
    }
    cout << "H(X)max= " << max << "  H(X)min=" << min;
    return 0;
}