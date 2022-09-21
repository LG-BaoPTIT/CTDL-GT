#include<bits/stdc++.h>
using namespace std;
void fullns(string &t){
	if(t[2]!='/') t = "0" + t;
	if(t[5]!='/') t.insert(3,"0");
}
class NhanVien
{
    private:
    string ten,gt,ns,dc,ms,nk,ma;

    public:
    NhanVien(){
        ten = " ";
        gt=" ";
        ns=" ";
        dc=" ";
        ms=" ";
        nk=" ";
        ma="00001";
    }
    void nhap(){
        getline(cin,ten);
        getline(cin,gt);
        getline(cin,ns);
        getline(cin,dc);
        getline(cin,ms);
        getline(cin,nk);
    }
    void xuat(){
        fullns(ns);fullns(nk);
        cout<<ma<<" "<<ten<<" "<<ns<<" "<<dc<<" "<<ms<<" "<<nk;
    }
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}