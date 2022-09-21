#include<iostream>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
        
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        int arr[n],B[10000],g=0;
        nhap(arr,n);
        for(int i=0;i<n;i++){
        if(x==arr[i]){
                cout<<"1"<<endl;
                g=1;
                break;
        }  
    }
       if(g==0) cout << "-1" <<endl;
    }

    return 0;
}