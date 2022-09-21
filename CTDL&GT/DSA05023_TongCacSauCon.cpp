#include<bits/stdc++.h>
using namespace std;
long long F[20];
int to_number(char c){
    return c-'0';
}
long long qhd(string s){
    int n=s.length();long long kq=0;
    F[0]=to_number(s[0]);
    kq=F[0];
    for(int i=1;i<n;i++){
        int t=to_number(s[i]);
        F[i]=F[i-1]*10+t*(i+1);
        kq+=F[i];
    }
    return kq;
}
int main(){
    int t;cin >>t;
    while(t--){
        string s; cin>>s;
        cout<<qhd(s)<<endl;
    }
    return 0;
}