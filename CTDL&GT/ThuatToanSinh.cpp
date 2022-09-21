#include<iostream>
using namespace std;
int ok,a[100],n;
void sinh(){
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
int kiemtra(){

    for(int i=1;i<=n/2;i++){
        if(a[i]!=a[n-i+1]) return 0;
    }
    return 1;
}
int main(){
    cin >> n;
    ok=1; 
    fill_n(a,100,0);
    while(ok){
        
        if(kiemtra()){
            for(int i=1;i<=n;i++){
                cout<< a[i]<<" ";
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}