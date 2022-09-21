#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
int fine(int arr[],int x,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i+1;
    }
    return -1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int arr[n+1];
        nhap(arr,n);
        cout << fine(arr,x,n)<< endl;

    }
    return 0;
}