#include<bits/stdc++.h>
using namespace std;
void nhap(long long a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        long long a[1000],n,x=0;
        cin >> n;
        nhap(a,n);
        
        for(int i=0;i<n;i++){
            if(a[i]==0) cout<<a[i]<<" ";
            
        }
        for(int i=0;i<n;i++){
            if(a[i]==1) cout<<a[i]<<" ";
            
        }
        for(int i=0;i<n;i++){
            if(a[i]==2) cout<<a[i]<<" ";
            
        }
        cout << endl;
        
    }
    return 0;
}