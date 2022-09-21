#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long tinh(int n,int k){
    int F[100005]={0};
    F[0]=1;F[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=min(i,k);j++){
            F[i]=(F[i]+F[i-j])%M;
        }
    }
    return F[n];
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >>n>>k;
        cout<<tinh(n,k)<<endl;
    }
    return 0;
}