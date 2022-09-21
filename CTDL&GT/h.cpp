#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long luythua(int n,int k){
    if(k==0) return 1;
    long long x=luythua(n,k/2);
    if(k%2==0) return (x*x%M)%M;
    return n*(x*x%M)%M;
}
int main(){
    int t; cin >>t;
    while(t--){
        int n,k;
        cin >> n>>k;
        long long sum=1;
        for(int i=2;i<=n;i++){
            sum=(sum+luythua(i,k))%M;
        }
        cout<<sum<<endl;
    }
    return 0;
}