#include<iostream>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
int kt(int arr[],int n){
    for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                if(arr[j]>arr[i]){
                    return j-i;
                    
                }
            }
        }
        return 0;
}

int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        nhap(arr,n);
        if(kt(arr,n)==0) cout << "-1"<<endl;
        else cout <<kt(arr,n) <<endl;
    }
    return 0;
}