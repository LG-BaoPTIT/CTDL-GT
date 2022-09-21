#include<iostream>
#include<string.h>

using namespace std;
int ok =1;
void sinh(int a[],int n){
    int i=n;
    while(i>=1&&a[i]==1){
        a[i]=0;
       i--;
    }
    if(i==0){
        ok=0;
    }
    else a[i]=1;
}
int kt1(int n){
    if(n<6) {return 0;}
    return 1;
}
int kt2(int A[],int n){
    if(A[1]==0&&A[n]==1) return 1;
    return 0;
}
int kt3(int A[],int n){
    for(int i=1;i<n;i++){
        if(A[i]==0&&A[i+1]==0) return 0;
    }
    return 1;
}
int kt4(int A[],int n){
    int d=0;
    for(int i=1;i<=n;i++){
        if(A[i]==1) {d++;}
        else {d=0;}
        if(d==4) return 0;
    }
    return 1;
}

int main(){
    int n; cin >> n;
    int A[1000];fill_n(A,1000,0);
    int arr[1000][130];int g=1;
    while(ok){
        sinh(A,n);
        if(kt1(n)&&kt2(A,n)&&kt3(A,n)&&kt4(A,n)){
            for(int i=1;i<=n;i++){
                arr[g][i]=A[i];
            }
            g++;
            
        }
        
    }
    
    g--;
    while(g){
        for(int k=1;k<=n;k++){
            if(arr[g][k]==0) cout<<"8";
            else cout <<"6";
        }
        cout << endl;
        g--;
    }
    return 0;
}