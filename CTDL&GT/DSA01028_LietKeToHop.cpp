#include<bits/stdc++.h>
using namespace std;
int a[100],x[100],A[100];int n,k,g=1;
void xuat(){
    for(int i=1;i<=k;i++){
        cout<<A[a[i]]<<" ";
    }
    cout<< endl;
}
int kt(int y){
    for(int i=0;i<g;i++){
        if(y==A[i]) return 0;
    }
    return 1;
}
void Try(int i){
    for(int j=a[i-1]+1;j<g-k+i;j++){
        a[i]=j;
        if(i==k) xuat();
        else Try(i+1);
    }
}
void init(){
    for(int i=1;i<=n;i++){
        cin>>x[i];
        if(kt(x[i])) A[g++]=x[i];
    }
    sort(A+1,A+g);
}
int main(){
    cin >>n >>k;
    init();
    Try(1);
    
    return 0;
}

