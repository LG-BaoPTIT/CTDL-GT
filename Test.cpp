#include<bits/stdc++.h>
using namespace std;
struct Test
{
    string mv;
    string name;
    long long x;
};

int main(){
    struct Test ten;
    getline(cin,ten.mv);
    getline(cin,ten.name);
    cin >> ten.x;
    string s1=" ";
    string s2="";
    for(int i=0;i<ten.mv.length();i++){
        if(ten.mv[i]>='0'&&ten.mv[i]<='9'){
            s1+=ten.mv[i];
        }
        else s2+=ten.mv[i];
    }
    long a=atol(s1.c_str());
    cout<< ten.mv <<" " <<ten.name<<" "<< a <<" ";
    long long pc=0;
    string q="HT",w="HP",e="GV";
    if(s2.compare(q)==0) pc=2000000;
    if(s2.compare(w)==0) pc=900000;
    if(s2.compare(e)==0) pc=500000;
    
        cout<< pc << " " << ten.x*a+pc;

    return 0;
}