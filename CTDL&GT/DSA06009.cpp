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
        int arr[n],count_=0;
        nhap(arr,n);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==x) count_++;
            }
        }
        cout << count_ << endl;
    }
    return 0;
}