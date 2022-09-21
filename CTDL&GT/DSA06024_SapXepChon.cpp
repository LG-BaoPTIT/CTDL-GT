#include<bits/stdc++.h>
using namespace std;
void in(vector<int>a){
	for(int i=0;i<a.size();i++) cout << a[i] << " ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i,j;
		cin >> n;
		vector<int>a(n);
		vector<vector<int>>arr;
		for(i=0;i<n;i++) cin >> a[i];
		for(i=0;i<n;i++){
			j = 0;
			int d=1;
			while(j<n-1){
				while(j<n-1 && a[j] > a[j+1]){
					swap(a[j],a[j+1]);
					d = 0;
					j++;
				}
				j++;
			}
			if(d==0) arr.push_back(a);
		}
		for( i=arr.size()-1;i>=0;i--){
			cout << "Buoc " << i+1 << ": ";
			in(arr[i]);
		}
	}
}