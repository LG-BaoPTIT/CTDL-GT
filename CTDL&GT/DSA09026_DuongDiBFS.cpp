#include<bits/stdc++.h>
using namespace std;
int v,e,a,b;
vector<int>ke[1001];
int chuaxet[1001];
int truoc[1001];
void Reset(){
	for(int i=1;i<=v;i++) ke[i].clear();
	memset(chuaxet,1,sizeof(chuaxet));
	memset(truoc,0,sizeof(truoc));
}
void khoitao(){
	for(int i=0;i<e;i++){
		int a,b;
		cin >>a >>b;
		ke[a].push_back(b);
	}
}
void BFS(){
	queue<int> q;
	q.push(a);
	chuaxet[a]=0;
	while(!q.empty()){
		int x=q.front(); q.pop();
		if(x==b){
			vector<int>vt;
			int tmp=truoc[x];
			vt.push_back(x);
			while(tmp!=a){
				if(tmp==0){
					cout<<-1;
					return;
				}
				vt.push_back(tmp);
				tmp=truoc[tmp];
			}
			vt.push_back(a);
			reverse(vt.begin(),vt.end());
			for(int i=0;i<vt.size();i++){
				cout<<vt[i]<<" ";
			}

			return ;
		}
		for(int i=0;i<ke[x].size();i++){
			int y=ke[x][i];
			if(chuaxet[y]){
				truoc[y]=x;
				chuaxet[y]=0;
				q.push(y);

			}
		}
	}
	cout<<-1;
}
int main(){
	int t;cin >>t;
	while(t--){
		cin >>v>>e>>a>>b;
		Reset();
		khoitao();
		BFS();
		cout<<endl;
	}

	return 0;
}