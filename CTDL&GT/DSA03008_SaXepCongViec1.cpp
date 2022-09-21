#include<bits/stdc++.h>
using namespace std;
struct task{
	int s,f;
} a[1000];
bool cmp(task x,task y){
	return x.f < y.f;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++) cin >> a[i].s;
		for(int i=0;i<n;i++) cin >> a[i].f;
		sort(a,a+n,cmp);
		int x=0;int d=1;
		for(int j=1;j<n;j++){
			if(a[j].s >= a[x].f){
					x=j;d++;
			}
		}
			cout<< d<<endl;
		
	}
	return 0;
}