#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >>t;
	while(t--){
		int v,e;cin>>v>>e;
		
		vector< int > list[v+9];
		for(int i=1;i<=e;i++){
			int a,b;
			cin>>a>>b;
			list[a].push_back(b);
			list[b].push_back(a);
		}
		for(int i=1;i<=v;i++){
			cout<<i<<": ";
			for(int j=0;j<list[i].size();j++){
				cout<<list[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}