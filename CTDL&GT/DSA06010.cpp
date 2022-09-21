#include<bits/stdc++.h>
using namespace std;
 int g=0;
void nhap(long long arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void tach(int x,long long A[]){
   
    while(x>0){
        int dk=1;
        int n=x%10;
        x/=10;
        for(int i=0;i<=g;i++){
            if(A[i]==n){
                dk=0;
                break;
            }
        }
        if(dk){
            A[g++]=n;
            
        }
    }
}
void xuat(long long A[]){
    for(int i=0;i<g;i++){
        cout << A[i] << " ";
    }
    cout << endl ;
}
int main(){
    int t; cin >> t;

    while(t--){ 
        g=0;
        long long arr[10000],A[10000];int n; cin >> n;
        fill_n(A,10000,-1);
        nhap(arr,n);
        for(int i=0;i<n;i++){
            tach(arr[i],A);
        }
        sort(A,A+g);
        xuat(A);
    }
 return 0;
}