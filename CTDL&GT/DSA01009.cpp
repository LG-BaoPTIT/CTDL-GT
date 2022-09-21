#include<iostream>
using namespace std;
int ok=1;
void sinh(char A[],int n){
    int i=n;
    while(i>=1&&A[i]=='B'){
        A[i]='A';
        i--;
    }
    if(i==0){
        ok=0;
    }
    else A[i]='B';
}

int kt(char A[],int n,int k){
    int d=0,x=0;
    for(int i=1;i<=n;i++){
        if(A[i]=='A') {d++;}
        else{
            if(d==k) x++;
            d=0;
        }     
    }    
    
    if(x==1) return 1;
    return 0;
}
void xuat(char A[],int n){
    for(int i=1;i<=n;i++){
        cout<<A[i];
    }
    cout << endl;
}
int main(){
    int n,k;ok=1; char A[100];fill_n(A,100,'A');
    cin >> n >>k;
    while(ok){
        if(kt(A,n,k)) xuat(A,n);
        sinh(A,n);
    }
    return 0;
}