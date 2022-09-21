#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int n){
    for(int i=1;i<=n;i++) cin >> A[i] ;
}
int binarysearch(int A[],int low,int high,int x){
    if(low>high) return -1;
    
    int mid=(low+high)/2;
    if(A[mid]==x) return mid;
 
    if (x < A[mid])
        return binarysearch(A, low, mid - 1, x);
    
    return binarysearch(A, mid + 1, high, x);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,x;cin >> n >> x; int A[n+2];
        nhap(A,n);
        int kq=binarysearch(A,1,n,x);
        if(kq==-1) cout <<"NO"<<endl;
        else cout<<kq<<endl;
    }
    return 0;
}