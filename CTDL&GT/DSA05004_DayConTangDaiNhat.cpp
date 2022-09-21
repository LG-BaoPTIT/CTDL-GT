#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin >>n;
	int A[1002],C[1003];
	for(int i=0;i<n;i++){
		cin >>A[i];
	}
	memset(C,0,sizeof(C));
	int kq=0;
	for(int i=0;i<n;i++){
		C[i]=1;
		for(int j=0;j<i;j++){
			if(A[j]<A[i]) C[i]=max(C[i],C[j]+1);
		}
		kq=max(kq,C[i]);
	}
	cout<<kq<<endl;
	return 0;
}