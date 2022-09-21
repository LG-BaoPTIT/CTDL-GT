#include<bits/stdc++.h>
using namespace std;
int a[100],v[100];
int n,k;
vector< vector<int> > res;
void init(){
    res.clear();
    cin >>n >>k;
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    sort(v+1,v+1+n);
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            int s=0;
            for(int l=1;l<=n;l++){
                if(a[l]) s+=v[l];
            }
            if(s==k){
                vector<int> x;
                for(int h=1;h<=n;h++){
                    if(a[h]) x.push_back(v[h]);
                }
                res.push_back(x);
            }
        }
        else Try(i+1);
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        init();
        Try(1);
        if(res.size()==0) cout << "-1" <<endl;
        else{
            sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++){
                cout<<"[";
                for(int j=0;j<res[i].size()-1;j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<res[i].back()<<"] ";
            }
        }
        cout<<endl;
      
    }

    return 0;
}