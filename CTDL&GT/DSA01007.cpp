#include<bits/stdc++.h>

using namespace std;
int ok=1;
int binaryGen(char a[]){
    int i=strlen(a)-1;
    while(i>=0 && a[i] == 'B' ){
        a[i]='A';
        i--;
    }
    if(i==-1){
        ok=0;
        return 0;
    }
    else a[i]='B';

}
void nhap(char a[],int n){
    for(int i=0;i<n;i++){
        a[i]='A';
    }
}
int main(){

    int t; cin >> t;
    
    while(t--){
        ok=1;
        char a[100];
        int n;cin>>n;
        
        nhap(a,n);

       
        while(ok){
            cout << a <<" ";
            binaryGen(a);
           
        }
        cout << endl;
        
        
    }

    return 0;
}