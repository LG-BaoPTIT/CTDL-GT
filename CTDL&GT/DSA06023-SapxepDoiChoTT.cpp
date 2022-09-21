#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void sapxep(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min =arr[i];
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                int tg=arr[i]; arr[i]=arr[j]; arr[j]=tg;
            }
        }
        cout << "Buoc "<< i+1 <<": ";
        for(int k=0;k<n;k++){
            cout << arr[k]<<" ";
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    int arr[n];
    nhap(arr,n);
    sapxep(arr,n);
    return 0;
}