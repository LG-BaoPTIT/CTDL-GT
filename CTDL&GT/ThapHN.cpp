#include<bits/stdc++.h>
using namespace std;
void chuyen(int n,char A,char B){
    cout<<n<<"   " <<A<<" -> "<<B<<endl;
}
void HaNoi(int n,char a,char b,char c){
    if(n==1){  
        chuyen(1,a,c);
    }
    else{
        HaNoi(n-1,a,c,b);
        chuyen(n,a,c);
        HaNoi(n-1,b,a,c);
    }
}
int main(){
    int n;cin >>n;
    char a='A',b='B',c='C';
    HaNoi(n,a,b,c);
    return 0;
}