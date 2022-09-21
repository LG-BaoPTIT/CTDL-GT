#include<bits/stdc++.h>
using namespace std;
void nhap(int A[],int n){
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
}
int main(){
    int n,A[20];cin >>n;
    nhap(A,n);
    sort(A,A+n);
    do{
        for(int i=0;i<n;i++){
            cout <<A[i]<<" ";
        }
        cout <<endl;
    }while(next_permutation(A,A+n));
    return 0;
}