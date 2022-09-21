#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
            cin >> arr[i];
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        nhap(arr,n);
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
           cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}