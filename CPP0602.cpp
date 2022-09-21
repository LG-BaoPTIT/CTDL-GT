#include<bits/stdc++.h>
using namespace std;
void fullns(string &t){
	if(t[2]!='/') t = "0" + t;
	if(t[5]!='/') t.insert(3,"0");
}
class SinhVien
{
    private:
    string ten,malop,namsinh,ms;
    float diem;
    public:
   
    friend istream &operator >>(istream &in,SinhVien &a){
     
      getline(cin,a.ten);
      getline(cin,a.malop);
      getline(cin,a.namsinh);
      cin>>a.diem;
    }
    friend ostream &operator << (ostream &out,SinhVien &a){
            fullns(a.namsinh);
            out<<a.ms<<" "<< a.ten<<" "<<a.malop<<" "<<a.namsinh<< " "<< fixed<< setprecision(2)<<a.diem;
    }

};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}