#include<bits/stdc++.h>
using namespace std;
long long UGLY(int n){
    long long i2=1,i3=1,i5=1;
    long long ugly[n+4];
    ugly[1]=1;
    for(int i=2;i<=n;i++){
        ugly[i]=min(ugly[i2]*2,min(ugly[i3]*3,ugly[i5]*5));
        if(ugly[i]==ugly[i2]*2) i2++;
        if(ugly[i]==ugly[i3]*3) i3++;
        if(ugly[i]==ugly[i5]*5) i5++;
    }
    return ugly[n];
}
int main(){
    int t;cin >>t;
    while(t--){
        int n;
        cin >>n;
        cout<<UGLY(n)<<endl;;
    }
    return 0;
}