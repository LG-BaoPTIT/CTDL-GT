#include<bits/stdc++.h>
using namespace std;
vector<string> res;
int n, A[100][100];
bool check_=false;
void init(){
   cin >> n;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           cin >> A[i][j];
       }
   }
   res.clear();
   check_=false;
}
void Try(int i,int j,string s){
        if(i==1&&j==1&&A[i][j]==0){
            check_=false;
            return;
        }
        if(i==n&&j==n&&A[n][n]){
            res.push_back(s);
            check_=true;
            return;
        }
        if(i<n &&A[i+1][j]) Try(i+1,j,s+"D");
        if(j<n&&A[i][j+1]) Try(i,j+1,s+"R");
}
int main(){
    int t; cin >> t;
    while(t--){
        init();
        Try(1,1,"");
        if(!check_){
            cout<<-1<<endl;
        }
        else{
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++){
                cout<< res[i]<<" ";
            }
        }
        cout<<endl;
    }
   

    return 0;
}