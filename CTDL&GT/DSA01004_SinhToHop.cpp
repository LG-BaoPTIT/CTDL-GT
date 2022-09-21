#include<iostream>
using namespace std;
int arr[100],n,k,ok=1;
void khoitao(){
	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
}
void xuat(){
	for(int i=1;i<=k;i++){
		cout<<(arr[i]);
	}
		cout <<" ";
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
int main(){
	int t; cin >>t;
	while(t--){
		ok=1;
		cin >>n >> k;
		khoitao();
		do{
			xuat();
			sinhth();
		}while(ok);
		cout << endl;
	}
	return 0;
}