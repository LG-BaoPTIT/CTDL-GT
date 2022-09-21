#include<iostream>
#include<math.h>
using namespace std;
long long k=1;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>> arr[i];
        k*=arr[i];

    } 
}
long long UCLN(int a,int b){
    while(a*b!=0){
        if(a>b) a%=b;
        else b%=a;
    }
    return a+b;
}
int main(){
    int t;cin >> t;
    while(t--){
         k=1;
            int n;cin >> n;
            int arr[100];
            nhap(arr,n);
            long long x=UCLN(arr[0],arr[1]);
            for(int i=2;i<n;i++){
                if(UCLN(x,arr[i])>x) x=UCLN(x,arr[i]);
            }
             
            for(int j=1;j<x;j++){
                k*=k;
            }
            k=k%1000000007;
           cout<<k<<endl;
            
    }
    return 0;
}