#include<bits/stdc++.h>
using namespace std;
int v,e,a,b,chuaxet[1001],truoc[1001];
vector<int> ke[1001];
void DSK(){
	memset(chuaxet,1,sizeof(chuaxet));
	memset(truoc,0,sizeof(truoc));
	for(int i=1;i<=v;i++){
		ke[i].clear();
	}
	for(int i=1;i<=e;i++){
		int c,d;cin >>c>>d;
		ke[c].push_back(d);
	}
}
void dfs(){
	stack<int>st;
	st.push(a);
	chuaxet[a]=0;
	while(!st.empty()){
		int x=st.top();st.pop();
		if(x==b){
			vector<int>vs;
			vs.push_back(x);
			int tmp=truoc[x];
			while(tmp!=a){
				if(tmp==0){
					cout<<"-1";
					return ;
				}
				vs.push_back(tmp);
				tmp=truoc[tmp];
			}
			vs.push_back(a);
			reverse(vs.begin(),vs.end());
			for(int i=0;i<vs.size();i++){
				cout<<vs[i]<<" ";
			}

		}
		for(int i=0;i<ke[x].size();i++){
			int y=ke[x][i];
			if(chuaxet[y]){
				chuaxet[y]=0;
				truoc[y]=x;
				st.push(x);
				st.push(y);
				break;
			}
		}
	}

}
int main(){
	int t;cin >>t;
	while(t--){
		cin>>v>>e>>a>>b;
		DSK();
		dfs();
		cout<<endl;
	}
	return 0;
}