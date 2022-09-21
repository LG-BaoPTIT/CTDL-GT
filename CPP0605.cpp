#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
	long long tu;
	long long mau;
	public:
	PhanSo(long long tu,long long mau){
		this->tu=tu;
		this->mau=mau;
	}
	void rutgon(){
		long long g=__gcd(this->tu,this->mau);
		this->tu/=g;
		this->mau/=g;
	}
	friend istream& operator >> (istream &is,PhanSo &a){
				is >>a.tu>>a.mau;
				return is;
	}
	friend ostream &operator << (ostream &os,PhanSo &a){
			os << a.tu<<"/"<<a.mau;
	}
	

};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
