#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void nhap(char arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=i+49;
    }
}
struct list_
{
    /* data */
    char a[100];
};


int main(){
    int t; cin >> t;
    while(t--){
        int n,g=0; cin>>n;
        char arr[20];
        struct list_ ds[400];
        nhap(arr,n);
        do{
            strcpy(ds[g].a,arr);
            g++;
    }while(next_permutation(arr,arr+n));
    for(int i=g-1;i>=0;i--){
        cout<< ds[i].a<<" ";
    }
    cout << endl;
    }
return 0;
}
   
