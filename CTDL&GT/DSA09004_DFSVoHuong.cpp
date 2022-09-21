#include<bits/stdc++.h>
using namespace std;
int v,e,n;
vector<int>ke[1001];
int chuaxet[1001];
void dfs(int u){
	stack<int>st;
	st.push(u);
	cout << u << " ";
	chuaxet[u] = 0;
	while(!st.empty()){
		int k = st.top();st.pop();
		for(int v=0;v<ke[k].size();v++){
			int y = ke[k][v];
			if(chuaxet[y]){
				cout << y << " ";
				st.push(k);st.push(y);
				chuaxet[y] = 0;
				break;
			}
		}
	}
}
void DFS2(int u){
	chuaxet[u]=0;
	cout<<u<<" ";
	for(int i=0;i<ke[u].size();i++){
		int v=ke[u][i];
		if(chuaxet[v]) DFS2(v);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> v >> e >> n;
		for(int i=1;i<=v;i++) ke[i].clear();
		memset(chuaxet,1,sizeof(chuaxet));
		for(int i=0;i<e;i++){
			int a,b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		dfs(n);
		//DFS2(n);
		cout << endl;
	}
}