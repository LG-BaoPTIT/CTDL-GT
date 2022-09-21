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
		ke[b].push_back(a);
	}
}
void BFS(){
	queue<int> q;
	q.push(a);
	chuaxet[a]=0;
	while(!q.empty()){
		int x=q.front(); q.pop();
		if(x==b){
			cout<<"YES"<<endl;;
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
	cout<<"NO"<<endl;;
}
int main(){
	int t;cin >>t;
	while(t--){
		cin >>v>>e;
		Reset();
		khoitao();
        int p;
        cin >>p;
        while(p--){
			memset(chuaxet,1,sizeof(chuaxet));
			memset(truoc,0,sizeof(truoc));
            cin >>a>>b;
            BFS();      
        }
		
	
	}

	return 0;
}