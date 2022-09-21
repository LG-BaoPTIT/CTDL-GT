#include<bits/stdc++.h>
using namespace std;
void nhap(long long A[],int n){
    for(int i=1;i<=n;i++) cin >> A[i] ;
}
long long binarysearch(long long A[],int low,int high,int x){
    if(low>high) return -1;
    if(x>=A[high]) return high;
    int mid=(low+high)/2;
    if(A[mid]==x) return mid;
    if (mid > 1 && A[mid - 1] <= x
        && x < A[mid])
        return mid - 1;
    if (x < A[mid])
        return binarysearch(A, low, mid - 1, x);
    
    return binarysearch(A, mid + 1, high, x);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,x;cin >> n >> x; long long A[n+2];
        nhap(A,n);
        long long kq=binarysearch(A,1,n,x);
        cout<< kq<<endl;
    }
    return 0;
}