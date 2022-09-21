#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
void sangNt(int arr[]){
    arr[1]=0;arr[0]=0;
    for(int i=2;i<sqrt(100000);i++){
        if(arr[i]==1){
            for(int j=2*i;j<100000;j+=i){
                arr[j]=0;
            }
        }
    }
}
int main(){
    int arr[1000];
    fill_n(arr,100000,1);
    sangNt(arr);
    int t;cin>>t;
    while(t--){
        int a,b,count_=0;cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(arr[i]==1) count_++;
        }
        cout << count_ << endl;

    }
    return 0;
}