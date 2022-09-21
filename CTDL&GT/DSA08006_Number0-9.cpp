#include<bits/stdc++.h>
using namespace std;
int kiemtra(string s1,int n){
    stringstream geek(s1);
    int x=0;
    geek>>x;
    if(x%n==0) { cout<<x<<endl; return 1;}
    return 0;
}
void Result(int n){
    queue<string> q;
    q.push("09");
    q.push("90");
    while(1){
        string s1=q.front();
        q.pop();
        if(kiemtra(s1,n)){
            
            break;
        }
        string s2=s1;
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        Result(n);
    }
    return 0;
}