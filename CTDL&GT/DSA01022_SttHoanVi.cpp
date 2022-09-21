#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
}
void arrr(int a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
int kt(int arr[],int a[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=a[i]) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int d=1;
        int n; cin>>n;
        int arr[20],a[20];
        nhap(arr,n);
        arrr(a,n);
       while(kt(arr,a,n)==0){
           next_permutation(arr,arr+n);
        d++;

       } 

        cout << d<<endl;

    }
    

    return 0;


}
        



         
    
   
