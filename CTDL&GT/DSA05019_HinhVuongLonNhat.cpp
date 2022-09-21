#include<bits/stdc++.h>
using namespace std; 
int m,n,A[505][505],C[505][505];
void nhap(){
    memset(C,0,sizeof(C));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> A[i][j];C[i][j]=A[i][j];
        }
    }
}
int tinh(){
    int kq=0;
   
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            if(A[i][j]==1)  C[i][j]=min(C[i-1][j],min(C[i][j-1],C[i-1][j-1]))+1;
               else  C[i][j]=0;
               
            kq=max(kq,C[i][j]);
            
        }
    }
    return kq;

}
int main(){
    int t;cin >>t;
    while(t--){
       
        cin>>m>>n;
        nhap();
        cout<<tinh()<<endl;
    }
    return 0;
}