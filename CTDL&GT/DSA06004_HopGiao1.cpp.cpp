#include<bits/stdc++.h>
using namespace std;
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		cin >>arr[i];
	}
}
void khoitao(int A[],int arr[],int n){
	for(int i=0;i<n;i++){
		arr[A[i]]=1;
	}
}
void hop(int A[],int B[],int arr[],int brr[],int c,int d){
	for(int i=c;i<=d;i++){
		if(arr[i]==1||brr[i]==1) cout << i << " ";
	}
	cout << endl;
}
void giao(int A[],int B[],int arr[],int brr[],int c,int d){
	for(int i=c;i<=d;i++){
		if(arr[i]==1 && brr[i]==1) cout << i << " ";
	}
	cout << endl;
}
int main(){
    int t; cin >> t;

    while(t--){
       int a,b,c,d; cin >> a >> b;
	   int A[100000],B[100000],arr[100000],brr[100000];
	   fill_n(arr,100000,0);
	   fill_n(brr,100000,0);
	   nhap(A,a); nhap(B,b);
	   khoitao(A,arr,a);khoitao(B,brr,b);
	   if(A[a-1]>B[b-1]) d=A[a-1];
	   else d=B[b-1];
		if(A[0]<B[0]) c=A[0];
	   else c=B[0];
	   hop(A,B,arr,brr,c,d);
	   giao(A,B,arr,brr,c,d);
   
    }
return 0;
}
   
