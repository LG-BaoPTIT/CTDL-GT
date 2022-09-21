#include<iostream>
using namespace std;
int arr[100],n,k,ok=1;
void khoitao(){
	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
}
void nhap(int A[],int n){
    for(int i=1;i<=n;i++){
        cin >> A[i];
    }
}
void sinhth(){
	int i=k;
	while(i>0 && arr[i]==n+i-k) i--;
	arr[i]++;
	if(i>0){
		for(int j=i+1;j<=k;j++){
			arr[j]=arr[i]+j-i;
		}
		
	}
	else ok =0;
}
int kt(int A[],int n){
    for(int i=1;i<=n;i++){
        if(A[i]!=arr[i]) return 0;
    }
    return 1;
}
int main(){
	int t; cin >>t;
	while(t--){
		ok=1;
		cin >>n >> k;
		khoitao();
		int A[100]; nhap(A,k);
        int d=1;
        while(kt(A,k)==0){
            sinhth();
            d++;
        }
			
			cout << d << endl;
	}
	return 0;
}
	
