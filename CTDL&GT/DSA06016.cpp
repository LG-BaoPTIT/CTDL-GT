#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int a,b;cin >> a >>b;
        int A[a],B[b];
        nhap(A,a);
        nhap(B,b);
        sort(A,A+a);
        sort(B,B+b);
        cout<<A[a-1]*B[0]<<endl;

    }
    return 0;
}