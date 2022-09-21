#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
}
int main(){

    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int arr[60],count_=0;
        nhap(arr,n);
        for(int i=0;i<n-1;i++){
            int min_ = min(arr[i],arr[i+1]);
            int max_ = max(arr[i],arr[i+1]);
            int tmp=0;
            while(max_>2*min_){
                min_*=2;
                count_++;
            }
        }
        cout<<count_<<endl;
    }
    return 0;
}