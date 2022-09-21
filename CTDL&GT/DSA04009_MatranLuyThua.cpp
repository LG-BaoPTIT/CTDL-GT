#include<bits/stdc++.h>
using namespace std;
 int n,k;
 int M=1e9+7;
struct Matran
{
    long long f[20][20];
};

Matran operator*(Matran A,Matran B){
    Matran C;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C.f[i][j]=0;
            for(int k=0;k<n;k++){
                C.f[i][j]=(C.f[i][j]+A.f[i][k]*B.f[k][j]%M)%M;
            }
        }
    }
    return C;
}
Matran powMod(Matran A,int k){
    if(k==1) return A;
    Matran X=powMod(A,k/2);
    if(k%2==0) return X*X;
    return A*X*X;
}
void xuat(struct Matran KQ,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<KQ.f[i][j]<< " ";
        }
        cout<<endl;
    }
}
int main(){
    int t; cin >> t; 
    while(t--){
        cin >>n>>k;
        Matran A,KQ;      
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> A.f[i][j];
        }
    }
        KQ=powMod(A,k);
        xuat(KQ,n);
    }
    return 0;
}