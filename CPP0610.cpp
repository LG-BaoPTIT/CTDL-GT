#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
		public:
			PhanSo(int tu,int mau){
				this->tu = tu;
				this->mau = mau;
			}
			
			friend istream& operator >>(istream &in,PhanSo &a){
				in >> a.tu >> a.mau;
				return in;
			}
			friend  PhanSo operator + (PhanSo a,PhanSo b){
			    PhanSo c(1,1);
			    c.tu = a.tu*b.mau + b.tu*a.mau;
			    c.mau = a.mau*b.mau;
			    long long g  = __gcd(c.tu,c.mau);
			    c.tu /= g;
			    c.mau /= g;
			    return c;
			}
			friend ostream& operator <<(ostream &out,const PhanSo c){
				out << c.tu << "/" << c.mau << endl;
				return out;
			}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}