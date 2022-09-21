#include<bits/stdc++.h>
using namespace std;
char kq(int n,long long k){
    long long x=pow(2,n-1);
    if(k==x) return 'A'+n-1;
    if(k<x) return kq(n-1,k);
    return kq(n-1,k-x);
}
int main(){
    int t; cin >> t;
    int n;long long k;
    while(t--){
       cin >> n >> k;
        cout<<kq(n,k)<<endl;
    }
    return 0;
}
