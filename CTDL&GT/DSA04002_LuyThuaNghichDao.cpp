#include<iostream>
using namespace std;
int Q=1e9 + 7;
long long dao(long long n){
    long long res=0,tmp;
    while(n>0){
        tmp = n%10;
        res=res*10+tmp;
        n/=10;
    }
    return res;
}
long long kq(long long n,long long k){
     if(n==0) return 0;
    if(k==0) return 1;
   
    long long x=kq(n,k/2);
    if(k%2==0) return x*x%Q;
    return n*(x*x%Q)%Q;
}
int main(){
    long long t,n;
    cin >>t;
    while(t--){
        cin >>n;
        long long k=dao(n);
        cout<<kq(n,k)<<endl;
        
        
    }
    return 0;
}