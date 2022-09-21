#include<bits/stdc++.h>

using namespace std;
void sangNT(int arr[]){
    for(int i=2;i<10000;i++){
        if(arr[i]==1){
            for(int j=2*i;j<10000;j+=i){
                arr[j]=0;
            }
        }
    }
    

}
int main(){
    int t; cin >> t;
    int arr[10000];
    fill_n(arr,10000,1);arr[1]=0;arr[2]=1;
    sangNT(arr);
    while(t--){
        int n,x=0;cin >> n;
        for(int i=2;i<=n/2;i++){
            if(arr[i]==1&&arr[n-i]==1){
                x=1;
                cout << i <<" "<<n-i<<endl;
                break;
            } 
        }
        if(x==0) cout << "-1"<< endl;
}
return 0;
}