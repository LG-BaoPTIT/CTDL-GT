#include<bits/stdc++.h>
using namespace std;
int qhd(int a[],int n){
    int e=0,s=0;
    for(int i=0;i<n;i++){
        e=max(a[i],e+a[i]);
        s=max(s,e);
    }
    return s;
}
int main(){
    int t; cin >>t;
    while(t--){
        int n;cin >> n;
        int a[n+3];
        for(int i=0;i<n;i++) cin >>a[i];
        cout<<qhd(a,n)<<endl;
    }
    return 0;
}