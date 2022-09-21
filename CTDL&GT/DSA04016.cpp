#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int a,b,c;cin >>a >>b>>c;
        int A[a+b+1];
        for(int i=1;i<=a+b;i++) cin >>A[i];
        sort(A+1,A+a+b+1);
        cout<<A[c]<<endl;
    }
    return 0;

}