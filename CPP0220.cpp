#include<iostream>
using namespace std;
void nhap(int arr[101][101],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[101][101];
        nhap(arr,n);
        for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==1||i==n||j==1||j==n) cout<<arr[i][j];
                    else cout<<" ";
                }
                cout<<endl;
        }


    }
    return 0;
}