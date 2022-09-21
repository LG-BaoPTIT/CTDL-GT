#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int a,int b){
    for(int i=0;i<a*b;i++){
        cin >> arr[i];
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int a,b,arr[10000];
        cin >> a >> b;
        nhap(arr,a,b);
        sort(arr,arr+a*b);
        for(int i=0;i<a*b;i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}