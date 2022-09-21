#include<bits/stdc++.h>
using namespace std;
int n,c[110][110],a[110],ans=1e8,s,cmin=1e8,kq[110];
bool ok[110];
void Try(int i){
    for(int j=2;j<=n;j++){
        if(!ok[j]){
            ok[j]=true;
            a[i]=j;
            s+=c[a[i-1]][j];
            if(i==n){
                if(s+c[j][1]<ans){
                    ans = s+c[j][1];
                    for(int p=1;p<=n;p++) kq[p]=a[p];
                }
            }
            else if(s+(n-i+1)*cmin < ans) Try(i+1);
            s-=c[a[i-1]][j];
            ok[j]=false;
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >>c[i][j];
            if(c[i][j]<cmin && c[i][j]!=0) cmin=c[i][j];
        }
    }
    a[1]=1;
    Try(2);
    cout<<"(";
    for(int i=1;i<=n;i++) cout << kq[i]<<",";
    cout<<"1)"<<endl;
    cout<<ans;
    return 0;
}