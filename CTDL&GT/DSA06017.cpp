#include<iostream>
#include<algorithm>
using namespace std;
int g=0;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void ghepMang(int arr[],int C[],int n){
    for(int i=0;i<n;i++){
        C[g++]=arr[i];
    }
}
int main(){
    int t ; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int A[a],B[b],C[a+b];
        nhap(A,a);
        nhap(B,b);
        g=0;
        ghepMang(A,C,a);
        ghepMang(B,C,b);
        sort(C,C+g);
        for(int i=0;i<g;i++){
            cout << C[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}