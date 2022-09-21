#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
int main(){
     int t ; cin >> t ;
     while(t--){
         int n ; cin >> n;
         int arr[n],A[100000];
         fill_n(A,100000,0);
         nhap(arr,n);
         sort(arr,arr+n);
         int kq=0;
         for(int i=0;i<=n;i++){
               A[arr[i]]=1;
         }
         for(int i=arr[0];i<=arr[n-1];i++){
             if(A[i]==0) kq++;
         }
         cout << kq << endl;
     }
    return 0;
}