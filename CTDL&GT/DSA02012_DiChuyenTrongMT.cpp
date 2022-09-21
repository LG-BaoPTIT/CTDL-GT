#include<iostream>
using namespace std;
int m,n,a[100][100],kq;
void init(){
    cin >> m >> n;kq=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
void Try(int i,int j){
    
    if(i==m&&j==n){
        kq++;
    
        return;
    }
  
    if(i<=m && j<=n) Try(i,j+1);
    if( i<=m && j<=n )Try(i+1,j);
   
}
int main(){
    int t; cin >> t;
    while(t--){
        init();
        Try(1,1);
        cout<<kq<<endl;
    }

    return 0;
}