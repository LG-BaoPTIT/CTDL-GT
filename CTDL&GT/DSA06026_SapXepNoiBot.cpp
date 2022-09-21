#include<bits/stdc++.h>
using namespace std;int g=-1;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
void sapxep(int arr[],int n){
   int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
 
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
               
                int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
                haveSwap = true; 
            }
        }
        if(haveSwap == false){
            break;
        }
        cout << "Buoc "<< i+1 <<": ";
        for(int k=0;k<n;k++){
            cout << arr[k]<<" ";
        }
        cout << endl;
        
    }     
   }
        
        


int main(){
    int n;cin>>n;
    int arr[n];
    nhap(arr,n);
    sapxep(arr,n);
    return 0;
}