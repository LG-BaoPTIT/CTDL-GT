#include<bits/stdc++.h>
using namespace std;
int a[100][100],n;
bool ok[100][100];
vector<string> res;


void init(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            ok[i][j]=false;
        }
    }
    
    res.clear();
    
}
void Try(int i,int j,string s){

    if(a[1][1]==0||a[n][n]==0){
        return ;
    }
    if(i==n&&j==n){
        res.push_back(s);
    }
    if(i!=n && a[i+1][j] && !ok[i+1][j]){
        ok[i][j]=true;
        Try(i+1,j,s+"D");
        ok[i][j]=false;
    
    } 
    if(j!=n && a[i][j+1] && !ok[i][j+1]){
        ok[i][j]=true;
        Try(i,j+1,s+"R");
        ok[i][j]=false;
    
    } 
    if(j!=1&&a[i][j-1]&&!ok[i][j-1]){
        ok[i][j]=true;
        Try(i,j-1,s+"L");
        ok[i][j]=false;
    
    } 
    if(i!=1&&a[i-1][j]&&!ok[i-1][j]){
        ok[i][j]=true;
        Try(i-1,j,s+"U");
        ok[i][j]=false;
    
    } 
    
    

}
int main(){
    int t; cin >> t;
    while(t--){
        init();
        Try(1,1,"");
        if(res.size()==0){
            cout << -1 << endl;
        }
        else{
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++){
                cout<< res[i]<<" ";
            }
            cout << endl;
        }
    }
    return 0;
}

