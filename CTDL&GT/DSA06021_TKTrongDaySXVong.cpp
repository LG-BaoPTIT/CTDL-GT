#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
}
int tim(int arr[],int n){
    int x=0;
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i+1])  x++;
        else break;       
    }
    return x+1;
}
int binarySearch(int arr[],int a,int b,int x){
    int l=a,r=b;
    while(r>=l){
        int mid=l+(r-l)/2;
        if(arr[mid]==x) return mid;
        if(arr[mid]>x) r=mid-1;
        if(arr[mid]<x) l=mid+1;
    }
    return -1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,x,arr[100000];cin >> n >> x;
        nhap(arr,n);
        int g=tim(arr,n);
        int d=binarySearch(arr,1,g,x);
        if(d!=-1) cout << d <<endl;
        else cout << binarySearch(arr,g+1,n,x) <<endl;
        
    }
    return 0;
}