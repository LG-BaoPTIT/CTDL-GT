#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        int arr[20];
        nhap(arr,n);
        do{
            for(int i=0;i<n;i++){
        cout << arr[i];}
        cout<<" ";
    }while(next_permutation(arr,arr+n));

    cout << endl;
        }
        



         return 0;
    }
   

