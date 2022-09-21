#include<iostream>
using namespace std;
int a[50];
void in(int m){
    cout<<"(";
    for(int i=1;i<m;i++){
        cout << a[i]<<" ";
    }
    cout<<a[m];
    cout<<") ";
}
void quaylui(int x,int i,int s){
    for(int j=x;j>=1;j--){
        a[i]=j;
        if(j==s) in(i);
        else if(j<s){
            quaylui(j,i+1,s-j);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;cin>>n;
        quaylui(n,1,n);
        cout<<endl;
    }

    return 0;
}