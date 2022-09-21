#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n,int b[]){
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        b[arr[i]]=1;
    }
}
int kt(int b[],int x){
    for(int i=1;i<=x;i++){
        if(b[i]==0) return i;
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        /* code */
        int n;cin >> n;
        int arr[n],b[10000];
        fill_n(arr,1000,0);
        nhap(arr,n-1,b);
        sort(arr,arr+n);
        cout << kt(b,arr[n-1]+1) << endl;

    }
    
    return 0;
}