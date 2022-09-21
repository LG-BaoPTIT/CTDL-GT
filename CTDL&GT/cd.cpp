#include<bits/stdc++.h>
using namespace std;
int ok=1;
void sinhth(int A[],int n,int k){
	int i=k;
	while(i>0 && A[i]==n-k+i)i--;
	A[i]++;
	if(i>0){
		for(int j=i+1;j<=k;j++){
			A[j]=A[i] +j-i;
		}
	}
	else ok=0;
}
int main(){
	int t;cin >>t;
	while(t--){
		ok=1;
		int n,k;cin>>n>>k;
		int A[100];
		for(int i=1;i<=k;i++){
			A[i]=i;
		}
		do{
			for(int i=1;i<=k;i++) cout<<A[i];
			sinhth(A,n,k);
			cout<<" ";
		}while(ok);
		cout<<endl;
	}
}