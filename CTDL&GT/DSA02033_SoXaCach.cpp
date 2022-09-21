#include <bits/stdc++.h>
using namespace std;

int n;
int arr[25];
int check[25] = {};

void in() {
	for (int i=1;i<=n;i++) {
		cout << arr[i];
	}
	cout << endl;
}

bool kt() {
	for (int i=1;i<n;i++) {
		if (abs(arr[i]-arr[i+1])==1) {
			return false;
		}
	}
	return true;
}
void Try(int index){
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			check[i]=1;
			arr[index]=i;
			if(index==n){
				if(kt()){
					in();
				}
			}
			else Try(index+1);
			check[i]=0;
		}
		
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}