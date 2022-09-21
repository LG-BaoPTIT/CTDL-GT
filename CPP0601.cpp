#include<bits/stdc++.h>
using namespace std;
void fullns(string &t){
	if(t[2]!='/') t = "0" + t;
	if(t[5]!='/') t.insert(3,"0");
}
class SinhVien{
	private:
		string name,code,date,grade;
		float point;
	public:
		void nhap(){
			code = "B20DCCN001";
			scanf("\n");
			getline(cin,name);
			scanf("\n");
			cin >> grade;
			cin >>  date >> point;
		}
		void xuat(){
			fullns(date);
			cout << code << " " << name << " ";
			cout << grade << " " << date << " ";
			cout << fixed << setprecision(2) << point ;
		}	
};
int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}